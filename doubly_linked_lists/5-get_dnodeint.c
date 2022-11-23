#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to list
 * @index: index of the node
 *
 * Return: nth
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = 0;

	while (len != index)
	{
		if (head == NULL)
			return (NULL);
		len++;
		head = head->next;
	}
	return (head);
}
