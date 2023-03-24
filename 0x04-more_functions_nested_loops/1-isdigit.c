#include "main.h"

/**
 * _isdigit - this function checks for digits(0 through 1)
 * @c: is the parameter to check
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
