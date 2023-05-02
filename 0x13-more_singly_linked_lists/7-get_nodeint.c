#include "lists.h"

/**
 * get_nodeint_at_index - gives the location of a node in listint_t list.
 * @head : pointer
 * @index : position of the node in the list
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}

	current = head;

	for (count = 0; count < index && current != NULL; count++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	return (current);
}
