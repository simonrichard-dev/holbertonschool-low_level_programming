#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *@n : number of _ print
 *
 * Return: _____ or \n
 */

void print_line(int n)

{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
