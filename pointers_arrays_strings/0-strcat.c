#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest : variable where to go
 * @src : variable from
 *
 * Return: char
 */


char *_strcat(char *dest, char *src)

	{
		int i = 0;
		int j = 0;

		while (dest[j])
			j++;

		while (src[i])
		{
		dest[j] = (src[i] + dest[j]);
			i++, j++;
		}

		return (dest);
	}
