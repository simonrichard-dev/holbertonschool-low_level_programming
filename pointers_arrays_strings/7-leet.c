#include"main.h"

/**
* *leet - function that encodes a string into 1337.
* @str: value of char
*
* Return: (r)
*/

char *leet(char *str)
{
	char *r = str;
	int i = 0;

	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {'4', '3', '0', '7', '1'};

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == a[i] || *str == a[i] - 32)
			{
				*str = n[i] + 0;
			}
		}
		str++;
	}
	return (r);
}
