#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index.
 * @head: pointeur to list
 * @index: value of index
 *
 * Return: 1 if succeeded or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (tmp == NULL) /*check if head exists*/
		return (-1);

	while (i != index) /*moving in the list to index*/
	{
		if (tmp->next == NULL) /*check if index out of range*/
			return (-1);
		i++;
		tmp = tmp->next;
	}

	if (index == 0) /*check if index == 0, ptr-> prev = NULL*/
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else /*replace new pointer to general*/
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}
	free(tmp); /*erase node*/
	return (1);
}
