#include "lists.h"

/**
 * pop_listint - function that deletes the head node.
 * @head : double pointer
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);

	temp = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (i);
}

