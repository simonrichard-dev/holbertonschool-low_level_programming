#include "main.h"

/**
 * _islower - returns 1 if character is lowercase
 * @c: its mine damnit
 *
 * Return: 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && 'z' <= c)
		return (1);
	else
		return (0);
}
