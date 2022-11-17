#include "lists.h"

/**
 * free_listint2 - function that frees listint_t
 * @head: double pointer on next listint_t
 * Return: node
 */

void free_listint2(listint_t **head)
{
	listint_t *newnode;

	if (head == NULL)
		return;
	while ((*head))
	{
		newnode = (*head);
		(*head) = (*head)->next;
		free(newnode);
	}
}
