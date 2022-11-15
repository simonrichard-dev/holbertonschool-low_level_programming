#include "lists.h"

/**
 * free_list - free list_t
 * @head: pointer on list_t
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *new_node;

	while (head != NULL)
	{
		new_node = head;
		free(head->str);
		head = head->next;
		free(new_node);
	}
}
