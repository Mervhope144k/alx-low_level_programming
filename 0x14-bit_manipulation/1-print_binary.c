#include "main.h"
#include <unistd.h>
#include <limits.h>

/**
 * print_binary - print an unsigned int in binary
 *
 * @n:the parameter to convert.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int print_bit = 1ul << 63;
	char c = '0';

	while (!(print_bit & n) && print_bit != 0)
		print_bit = print_bit >> 1;

	if (print_bit == 0)
		write(1, &c, 1);

	while (print_bit)
	{
		if (print_bit & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		print_bit = print_bit >> 1;
	}
}
