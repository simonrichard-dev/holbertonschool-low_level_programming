#include "lists.h"

/**
 * sum_listint - function that returns the sum of all data (n),
 * @head: pointer to the linked list
 * Return: sum of data or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
