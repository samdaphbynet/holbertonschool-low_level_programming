#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int c;

    c = _islower('H');
    _putchar(c + '0');
    c = _islower('o');
    _putchar(c + '0');
    c = _islower(108);
    _putchar(c + '0');
    _putchar('\n');
    return (0);
}
