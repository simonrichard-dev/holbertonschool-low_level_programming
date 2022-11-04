#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line.
 * @separator: string printed between strings
 * @n: number of integers
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *j;
	va_list ap;

	va_start(ap, n);

	j = 0;
	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, char *);
		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
