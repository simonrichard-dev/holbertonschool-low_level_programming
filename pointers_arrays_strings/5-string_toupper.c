#include "main.h"

/**
 * string_toupper - change lowercase in uppercase
 *@str: char
 *
 * Return: uppercase char
 */

char *string_toupper(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
		i++;
	}
	return (str);
}
