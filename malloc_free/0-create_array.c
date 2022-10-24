#include <main.h>
#include <stlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @unsigned int char: size of array
 * @char c: value of c
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *p;

	p = malloc(size * sizefof(c));

	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
