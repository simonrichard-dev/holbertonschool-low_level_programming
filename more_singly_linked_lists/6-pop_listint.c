#include "lists.h"

/**
 * pop_listint - function that frees listint_t
 * @head: double pointer to the next listint_t
 * Return: tmp
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if ((*head) == NULL)
		return (0);

	tmp = (*head);
	data = (*head)->n;
	(*head) = (*head)->next;

	free(tmp);

	return (data);
}
