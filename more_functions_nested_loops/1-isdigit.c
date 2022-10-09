#include "main.h"

/**
 * _isdigit - returns 1 in c is a digit between 0 and 9
 *
 * @c: The character to check if its between 0 and 9
 *
 * Return: 1 if character is a digit between 0 and 9, 0 otherwise
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
