#include "lists.h"
/**
 * add_node_end - function that adds a new node
 * @head: double pointer to list_t
 * @str: pointer on string
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	char *dup;
	list_t *new_node;
	list_t *tmp;

	dup = strdup(str);
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[i])
		i++;
	new_node->str = dup;
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}
