#include "variadic_functions.h"

/**
 * print_strings - function thazt prints strings,
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;

	unsigned int count;
	char *str;

	va_start(string, n);

	for (count = 0; count < n; count++)
	{
		str = va_arg(string, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(string);
}
