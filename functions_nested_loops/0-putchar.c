#include "main.h"

/**
 * main - Main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *c = "_putchar\n";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	return (0);
}
