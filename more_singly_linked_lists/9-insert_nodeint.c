#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: double pointer to listint_t
 * @idx: ui
 * @n: n
 * Return: adress of new node or null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode1 = *head;
	listint_t *newnode2 = *head;
	unsigned int j = 0;

	newnode1 = malloc(sizeof(listint_t));
	if (newnode1 == NULL)
		return (NULL);

	newnode1->n = n;

	if (idx == 0)
	{
		newnode1->next = newnode2;
		*head = newnode1;
		return (newnode1);
	}
	for (; j < (idx - 1); j++)
	{
		if (newnode2 == NULL || newnode2->next == NULL)
			return (NULL);
		newnode2 = newnode2->next;
	}
	newnode1->next = newnode2->next;
	newnode2->next = newnode1;
	return (newnode1);
}
