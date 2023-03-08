#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: The string to be measured
 *
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
