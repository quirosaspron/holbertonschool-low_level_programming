#include "main.h"

/**
 * puts_half - Prints half of a string
 *
 * @str: The string to be printed
 *
 */
void puts_half(char *str)
{
	int i;
	int len = 0;
	
	while (str[len] != '\0')
	{
		len++;
	}

	for (i = len / 2; str[i] != '\0' ; i ++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
