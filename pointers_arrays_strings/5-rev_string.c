#include "main.h"

/**
 *rev_string - prints a string, in reverse.
 *@s : value of the string.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int init = 0;
	int rev = 0;
	int tmp = 0;

	while (s[init] != '\0') /*loop to count each character*/
	{
		init++;
	}
	while (rev < init) /*loop to reverse the string*/
	{
		tmp = s[init];
		s[init] =  s[rev];
		s[rev] = tmp;
		rev++;
		init--;
	}
}
