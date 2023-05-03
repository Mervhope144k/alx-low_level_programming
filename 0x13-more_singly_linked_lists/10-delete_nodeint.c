#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at the index given
 * @head: pointer to the address of the head of the linked list.
 * @index: index of the node to be deleted - start from 0.
 * Return: If succeed (1).
 *         otherwise (-1).
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *helper, *curr_node = *head;
	unsigned int j;

	if (curr_node == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr_node);
		return (1);
	}

	for (j = 0; j < (index - 1); j++)
	{
		if (curr_node->next == NULL)
		{
			return (-1);
		}
		curr_node = curr_node->next;
	}
	helper = curr_node->next;
	curr_node->next = helper->next;
	free(helper);
	return (1);
}
