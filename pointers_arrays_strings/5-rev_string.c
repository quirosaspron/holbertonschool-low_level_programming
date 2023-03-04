#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: The string to be reversed
 *
 */
void rev_string(char *s)
{
	int i;
	char temp;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i > len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
