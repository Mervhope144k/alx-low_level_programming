#include "lists.h"
#include <stdio.h>

/**
 * listint_len - funtion that returns
 *               number of elements of linked list
 * @h: pointer to head of linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int nodes_count = 0;

	while (h != NULL)
	{
		nodes_count++;
		h = h->next;
	}

	return (nodes_count);
}
