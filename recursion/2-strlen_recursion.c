#include "main.h"

/**
 * _strlen_recursion - return the length of string
 * @s: char to count
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (!*s)
	{
		return (0);
	}
	else
	{
		len++;
		return(len += _strlen_recursion(s + 1));

	}
}
