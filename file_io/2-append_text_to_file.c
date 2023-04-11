#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to append to
 * @text_content: the content to append to the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int available;
	int file;
	int writen;
	int counter = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	available = access(filename, W_OK);
	if (available == -1)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content == NULL && file == 0)
	{
		return (1);
	}
	while (text_content[counter] != '\0')
	{
		counter++;
	}
	writen = write(file, text_content, counter);
	if (writen == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
