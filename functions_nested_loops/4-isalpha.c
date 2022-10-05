#include "main.h"
/**
 * _isalpha - prints 1 if c is an alphabetic character
 *
 * @c: the int to check if alphabetic
 *
 * Return: On success 1.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
