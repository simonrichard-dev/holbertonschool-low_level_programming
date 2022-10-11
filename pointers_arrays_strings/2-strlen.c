#include "main.h"

/**
 *_strlen - returns the lengths of a string.
 *@s : value of the character.
 *
 * Return: a number.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0') /*loop to count each character*/
	{
		length++;
		s++;
	}
	return (length);
}
