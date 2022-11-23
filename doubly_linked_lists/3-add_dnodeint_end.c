#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: double pointer to list
 * @n: number
 *
 * Return: adress of new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;

	new_node = malloc(sizeof(dlistint_t)); /*Create new_node & ckeck if ok*/
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n; /*Data for new_node*/
	new_node->next = NULL;

	if (*head == NULL) /*Check if exist or not*/
		*head = new_node;

	else
	{
		tmp = *head;

		while (tmp->next != NULL) /*Got to end & store last adress*/
			tmp = tmp->next;
		tmp->next = new_node; /*New next adress for last node*/
		new_node->prev = tmp; /*Pointer to prev for new_node */
	}

	return (new_node);
}
