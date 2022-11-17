#include "lists.h"

/**
 * listint_len - returns the number of elements in a link list
 * @h: pointer to a node
 *
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
