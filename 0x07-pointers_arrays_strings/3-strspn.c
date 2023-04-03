#include "main.h"

/**
 * _strspn - customised function that works like the builtin strspn
 * @s: argument one, segment of a string
 * @accept: argument two,
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int k = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					k++;
			}
		}
		else
			return (k);
	}
		return (k);

}
