#include "main.h"

/**
* create_file - Creates a file.
* @filename: pointer to the name of the file to create.
* @text_content: pointer to a string to write to the file.
* Return: If the function fails - -1.
*         Otherwise - 1.
*/
int create_file(const char *filename, char *text_content)
{
	int o_file, w_file, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}

	o_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_file = write(o_file, text_content, len);

	if (o_file == -1 || w_file == -1)
		return (-1);

	close(o_file);

	return (1);
}
