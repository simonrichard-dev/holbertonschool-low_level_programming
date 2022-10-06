#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Write a function that prints all natural numbers from n to 98
 * @n: variable number
 *
 * Return: 0 otherwisessss
 */
void print_to_98(int n)
{

	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d, ", n);
	}
}
