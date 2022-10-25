#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer
 * @str: entry point
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *c;
	int i;
	int j = 0;

	if (str == NULL)
		return (NULL);
	while (str [j] != '\0')
	{
		j++;
	}

	c = malloc(j + 1);

	for (i = 0; i < j; i++)
	{
		if (c == NULL)
			return (NULL);
		c[i] = str[i];
	}
	return (c);
}
