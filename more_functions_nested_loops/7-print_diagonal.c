#include "main.h"

/**
 * print_diagonal - function that draws a straight line in the terminal.
 *@n : number of _ print
 *
 * Return: _____ or \n
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
