#include "main.h"

/**
 * print_sign - prints th sign of a number
 * @c: its mine damnit
 *
 * Return: 0 otherwisessss
 *
 */
int print_sign(int c)
{
	if (c > '0')
	{
		return (1);
		_putchar('+');
	}
	if (c < '0')
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar(0);
	}
}
