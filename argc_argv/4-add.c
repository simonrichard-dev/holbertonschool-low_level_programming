#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument value
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, n;
	int r = 0;

	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[1][n]; n++)
		{
			if (isalpha(argv[i][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
		r += atoi(argv[i]);
	}
	printf("%d\n", r);
	return (0);
}
