#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - this function takes a pointer as parameter and return an integer
 * @s : string to measure
 * Return: value of i which is the length of the string.
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node - add a new node at the beginning of list_t  list.
 * @head: pointer to the head of the list
 * @str: the string to store a new node
 * Return: a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	new_node->len = _strlen(str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
