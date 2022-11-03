#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: size
 * @argv: pointer
 *
 * Return: result of the operation
 */
int main(int argc, char *argv[])
{
	char *s;
	int num1, num2, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	s = argv[2];

	if (argv[2][1] != '\0' || get_op_func(s) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	res = get_op_func(s)(num1, num2);
	printf("%d\n", res);
	return (0);
}
