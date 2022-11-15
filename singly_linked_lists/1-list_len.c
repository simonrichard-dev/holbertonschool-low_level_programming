#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function to print a singly linked list
 * @h: pointer to list_t
 *
 * Return: number of node
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
