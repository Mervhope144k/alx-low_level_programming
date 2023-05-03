#include "lists.h"

/**
 * free_listint - frees the memory of the linked list.
 * @head: pointer to the head of the linked list.
 * Return: void
 */ 

void free_listint(listint_t *head)
{
	listint_t *helper;

	for (helper = head; head != NULL; head = helper)
	{
		helper = head->next;
		free(head);
	}
}
