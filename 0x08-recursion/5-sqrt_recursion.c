#include "main.h"

/**
 * sqrt_helper - customized function to check square root
 * @n: int argument of the function
 * @b: int argument of the function
 * Return: int
 */

int sqrt_helper(int n, int b)
{

	if (n * n == b)
	{
		return (n);
	}
	if (n * n > b)
		return (-1);
	return (sqrt_helper(n + 1, b));
}

/**
 * _sqrt_recursion - customized function to square root
 * @n: int argument of the function
 * Return:-1 if n does not have a natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(1, n));
}
