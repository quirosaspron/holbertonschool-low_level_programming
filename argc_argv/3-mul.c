#include <stdio.h>
#include <stdlib.h>
/**
 * main - program prints the multiplication of the argument vectors
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	multi = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multi);
	return (0);
}
