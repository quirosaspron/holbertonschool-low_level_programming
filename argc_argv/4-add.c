#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * checker - checks for valid input
 * @argc: argument count
 * @i: counter for argv[]
 * @j: counter for argv[][]
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */

 /**
 * main - adds all arguments together if they are digits.
 * @argc: argument count only accepts ints separated by spaces.
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
    int i = 0;
    int result = 0;
    int j = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		result += atoi(argv[i]);
	}

	printf("%d\n", result);

	return (0);
}