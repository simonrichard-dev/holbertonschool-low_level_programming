#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: parameter
 *
 * Return: int that is the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);
	return (sum);
}
