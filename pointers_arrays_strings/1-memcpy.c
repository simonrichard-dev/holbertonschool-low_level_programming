#include "main.h"

/**
 * *_memcpy - copy memory area
 * @dest : where to go
 * @src : where from
 * @n : size
 *
 * Return: (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
