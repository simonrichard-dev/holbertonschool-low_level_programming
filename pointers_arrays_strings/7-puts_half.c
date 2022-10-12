#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str : unkwnow string
 *
 * Return: half of a string, followed by a new line.
 */
void puts_half(char *str)
{
	int c = 0;
	int m;
	int n;

	while (str[c] != '\0') /*loop to count each character*/
	{
		c++;
	}
	if (c % 2 == 0)
	{
		m = (c / 2);

		while (str[m] != '\0') /*loop to print pair string*/
		{
			_putchar(str[m]);
			m++;
		}
	}
	else
	{
		n = ((c / 2) + 1);

		while (str[n] != '\0') /*loop to print odd string*/
		{
			_putchar(str[n + 1]);
			n++;
		}
	}
	_putchar('\n');

}
