#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to prints
 * @f: function pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		return;

	f(name);
}
