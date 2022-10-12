#include "main.h"

/**
 *puts2 - prints a string.
 *@str : value of the string.
 *
 * Return: a shorter string.
 */
void puts2(char *str)
{
	int n; /*number of character*/

	for (n = 0; str[n]; n++) /*loop print each character*/
	{
		if (n % 2 == 0)
			_putchar(str[n]);
	}
	_putchar('\n');
}
