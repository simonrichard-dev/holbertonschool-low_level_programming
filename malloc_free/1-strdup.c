#include "main.h"
#include <stdlib.h>
#include <stddef.h>

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

	p = malloc(j + 1);

	for (i = 0, i < j; i++)
	{
		if (p = NULL)
			return (NULL);
		p[i] = str[i];
	}
	return (p);
}
