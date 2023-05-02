#include "lists.h"

/*
 * pop_listint - function that deletes the head node.
 * @head : double pointer
 * Return : 0 if the list is empty, else return data.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;

	data = (*head)->n

	temp = (*head)->next;

	free(temp);
	return (data);
}

