#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: The string to be printed
 *
 * Return: Length of a string
 */
void rev_string(char *s)
{
	int i;
	int len = _strlen(s);
	char temp;

	for (i = 0; i > len/2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;		
	}
}
