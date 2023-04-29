#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - main function, and take a pointer as its parameter
 * @h: list head
 * Return: number of element in list_t
 */
size_t list_len(const list_t *h)
{
	int node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
