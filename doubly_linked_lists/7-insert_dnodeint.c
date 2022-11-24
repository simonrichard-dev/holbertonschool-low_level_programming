#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to list
 * @idx: index value
 * @n: a int
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new_node;
	unsigned int i = 0;

	if ((*h) == NULL) /*check the pointer to list*/
		return (NULL);

	new_node = malloc(sizeof(dlistint_t)); /*allocate & check if node is ok*/
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n; /*add data in new_node*/

	if (idx == 0) /*add node at beginning*/
		return (add_dnodeint(h, n));

	while (i != idx - 1) /*go to the index*/
	{
		i++;
		tmp = tmp->next;
	}
	if (tmp != NULL)
	{
		new_node->prev = tmp;
		new_node->next = tmp->next;
		if (tmp->next != NULL)
			(tmp->next)->prev = new_node;
		tmp->next = new_node;
	}
	return (new_node);
}
