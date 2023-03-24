#include "main.h"

/**
 * print_numbers - this function prints 0 - 9
 * Return: void
 */
void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
