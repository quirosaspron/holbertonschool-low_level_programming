#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: The string to be printed
 *
 * Return: Length of a string
 */
void print_rev(char *s)
{
	int i;
	int len = _strlen(s)

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
