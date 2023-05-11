#include "main.h"
#include <stdlib.h>

/**
* read_textfile - Reads text file and prints it to POSIX stdout.
* @filename: pointer to the name of the file.
* @letters: The number of letters the
*           function should read and print.
* Return: If function fails or filename is NULL - 0.
*         Otherwise - number of bytes.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o_file, r_file, w_file;
	char *temp_memory;

	if (filename == NULL)
		return (0);

	temp_memory = malloc(sizeof(char) * letters);
	if (temp_memory == NULL)
		return (0);

	o_file = open(filename, O_RDONLY);
	r_file = read(o_file, temp_memory, letters);
	w_file = write(STDOUT_FILENO, temp_memory, r_file);

	if (o_file == -1 || r_file == -1 || w_file == -1 || w_file != r_file)
	{
		free(temp_memory);
		return (0);
	}

	free(temp_memory);
	close(o_file);

	return (w_file);
}
