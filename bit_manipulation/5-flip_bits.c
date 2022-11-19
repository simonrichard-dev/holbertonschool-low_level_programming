#include "main.h"

/**
 * count_bits - count the number of bits to be flipped
 * @n: unsigned long int (entry point)
 * Return: the good number of bits
 */

unsigned int count_bits(unsigned long int n)
{
	unsigned long int i = 0;

	while (n != 0)
	{
		i++;
		n &= (n - 1);
	}
	return (i);
}
/**
 * flip_bits - flip bits
 * @n: insigned long int n
 * @m: unsigned long int m
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bits(n ^ m));
}
