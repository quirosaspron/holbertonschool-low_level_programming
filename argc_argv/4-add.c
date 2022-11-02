#include <stdio.h>
#include <stdlib.h>

 /**
 * main - adds all arguments together if they are digits.
 * @argc: argument count
 * @argv: argument vector
 * @i: counter for argv[]
 * @j: counter for argv[][]
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