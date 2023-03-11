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
	int root;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}
	root = _sqrt_recursion(n / 2) * 2;
	if (root > n / _sqrt_recursion(n / 2))
	{
		return (-1);
	}
	return (root);
}
