#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: is a list of types arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	char *str;
	unsigned int i = 0, count2 = 0;
	va_list ap;

	va_start(ap, format);

	while (format && format[i])
	{
		if (count2)
			printf(", ");

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char*);
			if (str)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		default:
			count2 = 0;
			i++;
			continue;
		}
		count2 = 1,	i++;
	}
	printf("\n");
	va_end(ap);
}
