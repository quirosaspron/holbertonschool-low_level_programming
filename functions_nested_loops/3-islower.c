#include "main.h"
/**
 * _islower - prints 1 if a letter is lowercase
 *
 * @c: the int to check if lowercase
 *
 * Return: On success 1.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
