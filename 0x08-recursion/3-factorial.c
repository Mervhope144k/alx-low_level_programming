#include "main.h"

/**
 * factorial - this function return the factorial of a given number
 * @n: int argument of the fucntion
 * Return: -1 if n < 0 showing an error
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
