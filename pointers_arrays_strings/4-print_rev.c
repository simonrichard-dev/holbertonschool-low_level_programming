#include "main.h"

/**
 *print_rev - prints a string, in reverse.
 *@s : value of the character.
 *
 * Return: characters.
 */
void print_rev(char *s)
{
	int length = 0;
	int letter = 0;

	while (s[length] != '\0') /*loop to count each character*/
	{
		length++;
	}
	for (letter = length; length >= 0; letter--) /*loop to print each char*/
	{
		_putchar(s[letter]);
	}
	_putchar('\n');
}
