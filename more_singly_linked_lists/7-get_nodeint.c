#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer on listint_t
 * @index: ui
 * Return: head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
