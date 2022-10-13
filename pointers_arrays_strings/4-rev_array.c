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
	int value;
	int position = 0;

	while (position < (n / 2))
	{
		value = a[position];
		a[position] = a[((n - 1)  - position)];
		a[((n - 1) - position)] = value;
		position++;
	}
}
