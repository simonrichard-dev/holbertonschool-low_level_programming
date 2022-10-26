#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - function that returns a pointer
 *@width: width value
 *@height: height value
 *
 *Return: int
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int h, w;

	if (width == 0 || height == 0)
		return (NULL);

	p = malloc(height * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		p[h] = malloc(width * sizeof(int));
		if (p[h] == NULL)
		{
			for (w = 1; w < height; w++)
				free(p[w]);
			free(p);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			p[h][w] = 0;
		}
	}
	return (p);
}
