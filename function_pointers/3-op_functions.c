#include "3-calc.h"

/**
 * op_add - function that add 2 integers
 * @a: entry point a
 * @b: entry point b
 *
 * Return: output
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that substract 2 integers
 * @a: entry point a
 * @b: entry point b
 *
 * Return:  output
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiply 2 integers
 * @a: entry point a
 * @b: entry point b
 *
 * Return:  output
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divide 2 integers
 * @a: entry point a
 * @b: entry point b
 *
 * Return: output
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
 * op_mod - function that substract 2 integers
 * @a: entry point a
 * @b: entry point b
 *
 * Return: output
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
