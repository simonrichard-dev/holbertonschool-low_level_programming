#include "main.h"

/**
 *  print_numbers - function that prints numbers followed by a new line.
 *
 *  Return: result of the multiplication
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
