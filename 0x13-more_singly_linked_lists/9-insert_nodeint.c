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
	unsigned int j;
	listint_t *new_node, *curr_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	for (j = 0; j < (idx - 1); j++)
	{
		if (curr_node == NULL || curr_node->next == NULL)
		{
			return (NULL);
		}

		curr_node = curr_node->next;
	}

	new_node->next = curr_node->next;

	curr_node->next = new_node;

	return (new_node);
}

