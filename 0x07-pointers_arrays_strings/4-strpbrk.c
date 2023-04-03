#include "main.h"

/**
 * _strpbrk - customised function that work similar to builtin strpbrk
 * @s:argument one,
 * @accept: argument two,
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
