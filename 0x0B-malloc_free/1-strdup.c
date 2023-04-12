#include "main.h"
#include <stdlib.h>

/**
 * _strdup - customized function similar to strdup in standard library
 * @str: argument of the function
 * Return: NULL or a pointer
 */

char *_strdup(char *str)
{
	int len;
	int i;
	char *dupstr;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	dupstr = (char *) malloc((len + 1) * sizeof(char));

	if (dupstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		dupstr[i] = str[i];
	}
	return (dupstr);
}
