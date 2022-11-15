#include "lists.h"

/**
 * add_node - function that adds a new node
 * @head: double pointer to list_t
 * @str: pointer on string
 *
 * Return: node
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	char *dup;
	list_t *new_node = 0;

	dup = strdup(str);
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	new_node->str = dup;
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
