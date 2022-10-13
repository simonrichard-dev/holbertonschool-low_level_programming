#include "main.h"
/**
 * _strncat - concatenates 2 strings
 * @src: first string
 * @dest: second string
 * @n: nbr of bytes
 *
 * Return: (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}

	return (dest);
}
