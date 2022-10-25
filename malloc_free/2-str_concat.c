#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 * @s1: str1
 * @s2: str2
 *
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int length = 0;
	int lengths1 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (i = 0; s1[i]; i++)
	{
		length++;
		lengths1++;
	}
	for (i = 0; s2[i]; i++)
	{
		length++;
	}
	concat = malloc(sizeof(char) * (length + 1));
	if (concat != NULL)
	{
		for (i = 0; s1[i]; i++)
			concat[i] = s1[i];
		for (i = 0; s2[i]; i++)
			concat[lengths1++] = s2[i++];
		return (concat);
	}
	else
		return (NULL);
}
