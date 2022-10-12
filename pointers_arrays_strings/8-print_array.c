#include <stdio.h>

/**
 * print_array - prints array values
 * @a: array value
 * @n: array dimension
 *
 * Return : int
 */


void print_array(int *a, int n)

	{
		int i;

		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);

			if (i == n - 1)
				continue;
			printf(", ");
		}



		printf("\n");
	}
