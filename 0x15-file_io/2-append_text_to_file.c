#include "main.h"

/**
 * append_text_to_file - Appends text.
 * @filename: pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If function fails or filename is NULL - -1.
 *         If file does not exist and no permission is writen by user - -1.
 *         else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_file, w_file, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}

	o_file = open(filename, O_WRONLY | O_APPEND);
	w_file = write(o_file, text_content, len);

	if (o_file == -1 || w_file == -1)
		return (-1);

	close(o_file);

	return (1);
}
