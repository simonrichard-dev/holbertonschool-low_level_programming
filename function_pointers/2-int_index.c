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
	int x;

	if (array == 0 || size == 0 || cmp == 0)
		return (-1);
	if (size <= 0)
		return (-1);
	while (array[x] != 98)
		x++;
	return (x);
	if (array[x] == 98)
	return (x);
}
