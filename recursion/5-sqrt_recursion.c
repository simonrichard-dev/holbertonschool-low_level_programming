#include "main.h"
/**
 * _pow_recursion - the side function
 * @x: an integer
 * @n: an integer
 *
 * Return: an integer
 */
int _pow_recursion(int x, int n)
{
	if ((x * x) == n)
		return (x);
	if ((x * x) > n)
		return (-1);
	return (_pow_recursion(x + 1, n));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the integer input
 *
 * Return: an integer
 */
int _sqrt_recursion(int n)
{
	return (_pow_recursion(0, n));
}
