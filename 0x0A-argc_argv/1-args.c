#include <stdio.h>

/**
 * main - main function  taking parameters
 * @argc: argument to main
 * @argv: argument to main
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
