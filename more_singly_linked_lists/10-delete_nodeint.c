
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at given position
 * @head: double pointer on listint_t
 * @index: unsigned int
 * Return: new node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del_node;
	unsigned int i = 0;

	del_node = *head;

	if (del_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(del_node);
		return (1);
	}
	while (i < index - 1)
	{
		if (del_node->next == NULL)
			return (-1);

		del_node = del_node->next;
		i++;
	}
	temp = del_node->next;
	del_node->next = temp->next;
	free(temp);

	return (1);
}
