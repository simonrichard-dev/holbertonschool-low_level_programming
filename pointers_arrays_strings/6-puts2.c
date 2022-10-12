#include "main.h"

/**
 *puts2 - prints a string.
 *@str : value of the string.
 *
 * Return: a shorter string.
 */
void puts2(char *str)
{
	while (*str != '\0') /*loop to print each character*/
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str += 2;
		}
	}
	_putchar('\n');
}
