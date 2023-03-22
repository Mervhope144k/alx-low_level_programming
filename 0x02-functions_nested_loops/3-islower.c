#include "main.h"
/**
 * _islower - check for lowercase char
 * Return: 1 if c is lowercase, otherwise 0
 * @c: is the parameter to chack
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
