#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function taking arguments
 * @argc: argument to main
 * @argv: argument to main
 * Return: 0 for success and 1 for faillure
 */

int main(int argc, char *argv[])
{
	int x, y, product;

	if (argc != 3)
	{
		printf("%s\n", "ERROR");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		product = x * y;
	}
	printf("%d\n", product);
	return (0);
}
