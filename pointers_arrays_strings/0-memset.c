#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory area
 * @s : a pointer
 * @b : a char
 * @n : an int
 *
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
