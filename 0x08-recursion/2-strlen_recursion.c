#include "main.h"

/**
 * _strlen_recursion - funtion returning the length of a string
 * @s: argument, the function takes a pointer as argument
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
