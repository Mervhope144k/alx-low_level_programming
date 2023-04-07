#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 * @s: takes this pointer as argument
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

/**
 * is_palindrome_helper - this function takes 3 arguments
 * @s: argument pointer
 * @a: argument start of string
 * @b: argument end of string
 * Return: integer
 */

int is_palindrome_helper(char *s, int a, int b)
{
	if (a >= b)
	{
		return (1);
	}
	if (s[a] != s[b])
	{
		return (0);
	}
	return (is_palindrome_helper(s, a + 1, b - 1));
}

/**
 * is_palindrome - this function check if a string is a palindrom recursively
 * @s: takes an argument pointer
 * Return: integer 1 if true else 0
 */

int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, 0, _strlen_recursion(s) - 1));
}

