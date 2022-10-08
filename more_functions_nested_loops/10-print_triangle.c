#include "main.h"

/**
 * print_triangle - function that draws a triangle.
 *@size : size of the triangle
 *
 * Return: blank and #
 */

void print_triangle(int size)
{
	int l;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (l = 0; l < size; l++)
		{
			for (c = l; c < size; c++)
			{
				_putchar(' ');
			}

			for (c = 0; c < l; c++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
