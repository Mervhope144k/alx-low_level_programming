#include "main.h"

/**
 * _pow_recursion - this function will raise an int x to the power of int y
 * @x: argument of the function
 * @y: argument of the function
 * Return: -1 if y < 0; 0 if y == 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
