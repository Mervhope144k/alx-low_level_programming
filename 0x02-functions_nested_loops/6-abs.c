#include "main.h"
/**
 * _abs - compute for absolute value of an integer
 * @n: The parameter to computer for absolute value
 * Return: positive value equal to n
 */
int _abs(int n)
{
	while (n >= 0 || n <= 0)
		_putchar(n + '0');
}
