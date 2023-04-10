#include "main.h"
/**
 * read_textfile - reads and prints a text file
 * Return: The number of letters it could read and print
 * @letters: the number of letters it should read and print
 * @filename: name of the file to read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t total_letters_read = 0;
	ssize_t i;
	ssize_t letters_read;

	if (filename == NULL)
	{
		return (0);
	}
	if (file == -1)
	{
		return (0);
	}
	while ((letters_read = read(file, buffer, sizeof(buffer))) < 100)
	{
		for (i = 0; i < letters_read; i++)
		{
			_putchar(buffer[i]);
		}
		total_letters_read += letters_read;
	}
	if (letters_read == -1)
	{
		return (0);
	}
	close(file);
	return (total_letters_read);
}
