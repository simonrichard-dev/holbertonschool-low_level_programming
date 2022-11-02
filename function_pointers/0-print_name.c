#include "function_pointers.h"
#include "stdio.h"

/**
 * print_name - function that print a name
 * @name: pointer to name
 * @f: pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
