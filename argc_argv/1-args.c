#include <stdio.h>
/**
 * main - program prints the number of argument vectors
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{

	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
