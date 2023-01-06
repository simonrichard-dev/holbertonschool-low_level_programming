#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: the value to search for
 *
 *Return: the index where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1;
	size_t m;

	if (array == NULL)
		return(-1);
	
	while (l <= h)
	{
		printf("Searching in array: ");
		for (m = l; m < h; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);

		m = (l + h) / 2;

		if (array[m] == value)
			return(m);
		if (array[m] < value)
			l = m + 1;
		if (array[m] > value)
			h = m - 1;
	}
	return(-1);
}
