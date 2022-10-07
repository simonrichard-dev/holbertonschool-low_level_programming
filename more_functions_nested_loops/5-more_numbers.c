#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14.
 *
 * Return: 013567891011121314 x 10
 */
void more_numbers(void)
{
	int a;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar('0' + a / 10);
			_putchar('0' + a % 10);
		}
		_putchar('\n');
	}
}
