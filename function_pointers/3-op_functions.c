#include "3-calc.h"

/**
 * op_add - function that add number-one and number-two
 * @a: The first number.
 * @b: The second number.
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtraction number-one by number-two
 * @a: first number.
 * @b: second number.
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplication number-one by number-two
 * @a: first number
 * @b: second number
 * Return: the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that division number-one by number-two
 * @a: first number
 * @b: second number
 * Return: the result of the division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function remainder after division number-one by number-two
 * @a: first number
 * @b: second number
 * Return: the remainder of the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
