#include "main.h"
/**
 * print_sign - this function will print the sign of a number
 * @n: this the parameter we will check for the sign
 * Return: 1, 0, -1 for positive, zero and negative numbers
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
