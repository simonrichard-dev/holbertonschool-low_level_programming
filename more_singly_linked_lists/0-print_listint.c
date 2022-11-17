#include "lists.h"

/**
 * print_listint - function that print listint
 * @h: pointer to list
 *
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
