#include "main.h"

/**
 * is_prime_number_helper - function to check that a number is a prime number
 * @x: argument
 * @y: argument
 * Return: 1 if true otherwise 0
 */

int is_prime_number_helper(int x, int y)
{
	if (y < 2 || y % x == 0)
	{
		return (0);
	}
	else if (x * x > y)
	{
		return (1);
	}
	else
	{
		return (is_prime_number_helper((x + 1), y));
	}
}

/**
 * is_prime_number - function to check that a number is a prime number
 * @n: argument
 * Return: 1 if true otherwise 0
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (is_prime_number_helper(2, n));
}
