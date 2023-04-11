#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument to main
 * @argv: argument to main
 * Return: 0
 */
int main(int argc, char **argv)
{
	int total, count;
	unsigned int a;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (total > 1)
		{
			for (a = 0; a < sizeof(cents[a]); a++)
			{
				if (total >= cents[a])
				{
					count += total / cents[a];
					total = total % cents[a];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
