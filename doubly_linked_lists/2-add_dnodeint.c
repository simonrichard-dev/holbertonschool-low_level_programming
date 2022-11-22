#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of list
 * @head: pointeur to list
 * @n: int
 *
 * Return: adress of new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	
	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}	
