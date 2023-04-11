#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument to main
 * @argv: argument to main
 * Return: 0 and 1
 */
int main(int argc, char **argv)
{
	int i, n, total = 0;
	char *flag;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			total += n;
		}
	}
	printf("%d\n", total);

	return (0);
}
