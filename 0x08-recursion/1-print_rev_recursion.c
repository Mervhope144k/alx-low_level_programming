#include "main.h"

/**
 * _print_rev_recursion - this function reverse print a string
 * @s: argument of the function, it takes a pointer
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

