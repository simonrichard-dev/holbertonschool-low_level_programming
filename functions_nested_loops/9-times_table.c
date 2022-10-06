#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int x, y, r;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');
			r = x * y;
			if (r <= 9)
				_putchar(' ');
			else
				_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
		}
		_putchar('\n');
	}
}
