#include "main.h"
#include <stdlib.h>

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * strtow - splits a string into words.
 * @str: the string
 *
 * Return: returns a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, flag, total_len;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	i = flag = total_len = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
			flag = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			flag = 0;
			total_len++;
		}
		i++;
	}

	total_len += flag == 1 ? 1 : 0;
	if (total_len == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (total_len + 1));
	if (words == NULL)
		return (NULL);

	util(words, str);
	words[total_len] = NULL;
	return (words);
}
