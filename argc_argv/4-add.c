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

    for (i = 0; i <= argc; i++)
        if (isdigit(argv[i]) == 0)
        {
            printf("Error\n");
		    return (1);
        }

    if (argc == 1)
    {
        printf("0\n");
    }

	for (j = 1; j <= argc; j++)
		result += atoi(argv[j]);
	printf("%d\n", result);
	return (0);
}