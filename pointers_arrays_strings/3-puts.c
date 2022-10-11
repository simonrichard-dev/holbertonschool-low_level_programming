#include "main.h"

/**
 *_puts - prints a string.
 *@str : value of the character.
 *
 * Return: a string.
 */
void _puts(char *str)
{
	int letter;

	while (*str != '\0') /*loop to print each character*/
	{
		letter = *str;
		_putchar(letter);
		str++;
	}
	_putchar('\n');
}
