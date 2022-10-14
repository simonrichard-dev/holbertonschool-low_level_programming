#include "main.h"

/**
 * *_memcpy : copies memory area
 *@desr : where to go
 *@src : where from
 *@n : size
 *
 * 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		src[i] = src[i];
		i++;
	}
	return (dest);
}
