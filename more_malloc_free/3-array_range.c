#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - concatenates two strings.
 *@min: min value
 *@max: max value
 *
 * Return: Always 0.
 */

int *array_range(int min, int max)
{
	int i = 0;
	int len = 0;
	int *p;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	p = malloc(sizeof(int) * len);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; min++)
	{
		p[i] = min;
		i++;
	}
	return (p);
}
