#include "main.h"

void print_binary(unsigned long int n)
{
	unsigned long int i;

	for (i = 1UL << 31; i > 0; >>= 1)
		printf("%c", (n & i) ? '1' : '0');
}
