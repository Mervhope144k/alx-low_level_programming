#include "lists.h"

/**
 * sum_listint - sum of all the data(n) of the linked list.
 * @head: pointer to the head of the linked list.
 * Return: If the list is empty - return 0
 *         Otherwise - return the sum of data(n)
 */


int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
