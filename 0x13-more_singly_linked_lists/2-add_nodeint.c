#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head : pointer to the address of the head node of thelist
 * @n : int data that the new nodemust contain.
 * Return: NULL if the function fail
 *         otherwise - the address of the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	(*head) = new_node;

	return (new_node);
}
