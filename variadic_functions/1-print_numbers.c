#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator:  the string to be printed between numbers
 * @n:  is the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;

	unsigned int i, imp;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		imp = va_arg(print, int);
		printf("%d", imp);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(print);
}
