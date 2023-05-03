#include "lists.h"

/**
 * free_listint2 - free the linked list and set the head to NULL
 * @head: pointer to the address of the head of the linked list.
 * Return: Void
 */


void free_listint2(listint_t **head)
{
	listint_t *helper;

	if (head == NULL)
	{
		return;
	}
	for (; *head != NULL; )
	{
		helper = (*head)->next;
		free(*head);
		*head = helper;
	}
	*head = NULL;
}
