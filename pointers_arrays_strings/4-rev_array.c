#include "main.h"

/**
 * reverse_array - everything in the name
 * @a : entry array values
 * @n : size of the array
 *
 * Return: a reverse array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int m;

	m = n - 1;
	while (i < m)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		m--;
	}
}
