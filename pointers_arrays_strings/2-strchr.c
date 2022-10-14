#include "main.h"

/**
 * *_strchr - copy memory area
 * @s : a string
 * @c : a char
 *
 * Return: (s[c])
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		s++;
		if (s[i] == c)
		{
			return (s);
		}
	}
		return (0);
}
