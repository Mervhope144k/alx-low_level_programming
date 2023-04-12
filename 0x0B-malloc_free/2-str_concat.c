#include "main.h"
#include <stdlib.h>

/**
 * str_concat - this function will concatenate two strings
 * @s1: argument of the function
 * @s2: argument of the function
 * Return: pointer, NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *new_str;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
		len1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
		len2++;
	}
	new_str = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		new_str[len1 + i] = s2[i];
	new_str[len1 + len2] = '\0';

	}
	return (new_str);
}
