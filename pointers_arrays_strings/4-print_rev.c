#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 *
 * @s: string to print in reverse
 */

void print_rev(char *s)
{

	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
