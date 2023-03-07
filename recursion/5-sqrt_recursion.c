#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of n
 *
 * @n: number to square root
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}

	return (n - _sqrt_recursion(n - 1));
}
