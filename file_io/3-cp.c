#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
/**
 * main - copies the contents of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int src, dst, n, i, sc, cc;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	if (access(argv[2], F_OK) == 0)
	{
		dst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	}
	if (access(argv[1], F_OK) == -1 || access(argv[1], R_OK) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	src = open(argv[1], O_RDONLY);
	if (access(argv[2], F_OK) != 0)
	{
		dst = open(argv[2], O_WRONLY | O_CREAT, 0664);
	}
	if (dst == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}
	while ((n = read(src, buffer, 1024 )) > 0)
	{	
		i = write(dst, buffer, n);
		if (i == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit (99);
		}
	}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit (98);
	}
	sc = close(src);
	cc = close(dst);
	if (sc == -1 || cc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd -1");
		exit (100);
	}
	return (0);
}
