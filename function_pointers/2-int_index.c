#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to array
 * @size: structure size_t type
 * @cmp: pointer to function
 *
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == 0 || size == 0 || cmp == 0)
		return (-1);
	if (size <= 0)
		return (-1);

	for (n = 0; n < size; n++)
		cmp(array[n]);
	return (n);
}
