#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *@a: value to change
 *@b: value to change
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int n = 0;

	n = *b;
	*b = *a;
	*a = n;
}
