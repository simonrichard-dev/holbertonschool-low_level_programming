#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @nb: value of the number
 *
 * Return: 0 otherwisessss
 *
 */
int print_last_digit(int nb)
{
	int c;

	if (nb > 0)
		c = nb % 10;
	else
		c = -1 * (nb % 10);
	_putchar((c % 10) + '0');
	return (c % 10);
}
