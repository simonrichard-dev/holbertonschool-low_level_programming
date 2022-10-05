#include "main.h"

/**
 * _isalpha - returns 1 if character is alphabetic
 * @c: its mine damnit
 *
 * Return: 0 otherwisessss
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
