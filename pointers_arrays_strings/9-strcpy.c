#include "main.h"

/**
 * _strcpy - Copies a string into another string
 *
 * @dest: The destination string
 *
 * @src: The source to copy to dest
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}
