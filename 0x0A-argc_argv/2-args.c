#include <stdio.h>

/**
 * main - main function taking parameters
 * @argc: argument to main
 * @argv: argument to main
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}