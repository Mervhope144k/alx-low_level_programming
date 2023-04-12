#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that create an array of chars
 * @size: argument of the function
 * @c: argument of the function
 * Return : NULL and 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
