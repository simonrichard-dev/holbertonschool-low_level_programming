#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str : unkwnow string
 *
 * Return: half of a string, followed by a new line.
 */
void puts_half(char *str)
{
	int a = 0;
	int b = 0;
	int n;

	while (str[a++] != '\0') /*loop to count each character*/
	{
		b++;
	}
	if (b % 2 == 0)
	{
		n = b / 2;
	}
	else
	{
		n = (b + 1) / 2;
	}
	for (a = n; a < b; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');

}
