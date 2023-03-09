#include <stdio.h>
/**
 * main - program prints its own name.
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
