#include "main.h"
/**
 * create_file - it creates a file
 * @filename: the name of the file to create
 * @text_content: content to write to the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t content;
	size_t count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	file = open(filename, O_CREAT | O_RDWR, 0600);
	if (file == -1)
	{
		return (-1);
	}
	while (text_content[count] != '\0')
	{
		count++;
	}
	content = write(file, text_content, count);
	if (content == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
