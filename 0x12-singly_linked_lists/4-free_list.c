#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free the memory allocated after use
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	if (!head)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
