#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function
 * @array: pointer to array
 * @size: structur size_t type
 * @action: pointer to function
 *
 * Return - void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == 0 || size == 0 || action == 0)
		return;
}
