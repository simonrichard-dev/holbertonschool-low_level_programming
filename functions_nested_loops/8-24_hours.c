#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer.
 *
 * Return: 0 otherwisessss
 *
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 23; h++)
	{
		for (m = 0; m < 59; m++)
		{
			_putchar(h / 10);
			_putchar(h % 10);
			_putchar(':');
			_putchar(m / 10);
			_putchar(m % 10);
			_putchar('\n');
		}
	}
}
