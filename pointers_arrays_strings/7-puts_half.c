#include "main.h"

/**
 * main - 
 *
 *
 * Return: 
 */
void puts_half(char *str)
{
	int letter;
	int numbofcharac = 0;

	while (s[l] != '\0') /*loop to print each character*/
	{
		numbofcharac++;
		s++;
	}
	while (numbofcharac > 0)
	{
		letter = *s;
		_putchar(letter);
		s--;
		numbofcharac--;
	}
	_putchar('\n');
}
