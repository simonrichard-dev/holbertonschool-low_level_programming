#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: pointer to next listint_t
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *new_node;

	while (head != NULL)
	{
		new_node = head;
		head = head->next;
		free(new_node);
	}
}
