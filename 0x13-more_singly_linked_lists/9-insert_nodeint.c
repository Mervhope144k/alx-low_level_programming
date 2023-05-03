#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a position of index idx.
 * @head: pointer to the address of the head of the linked list.
 * @idx: index position at which the new node must be inserted
 * @n: data(n) of the new node being added.
 * Return: If the function fails - NULL
 *         Otherwise - address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *prev_node, *curr_node;

	prev_node = NULL;

	curr_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	for (i = 0; i < idx && curr_node != NULL; i++)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
	}
	if (idx > 0 && curr_node == NULL)
	{
		return (NULL);
	}

	new_node->next = curr_node;

	if (prev_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		prev_node->next = new_node;
	}
	return (new_node);
}

