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
		_putchar('+');
		return (1);
	}
	else if (c == '0')
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
