#include "main.h"

/**
 * _iteration - check prime or not
 * @i: value of iteration
 * @n: value of input
 *
 * Return: int
 */
int _iteration(int i, int n)
{
	if ((i * i) > n)
		return (1);
	if ((n % i) == 0)
		return (0);
	return (_iteration(i + 1, n));
}
/**
 * is_prime_number -  returns 1 if the input is a prime number, otherwise 0.
 * @n: input (integer)
 *
 * Return: 1 if prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_iteration(2, n));
}
