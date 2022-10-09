#include "main.h"

/**
 * _isupper - returns 1 in c is uppercase else it returns 0
 *
 * @c: The character to check if its uppercase
 *
 * Return: 1 if uppercase, 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
