#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program prints the sum of the argument vectors
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 or 1 on success or failure
 */

int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;
	for (i = 1; i <= argc - 1; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}

		}
		sum += atoi(argv[i]);
	}

	if (argc >= 3)
	{
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (1);
	}
}
