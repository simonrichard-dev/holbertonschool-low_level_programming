#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument value
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int r;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		r = a * b;
		printf("%d\n", r);
	}
	return (0);
}
