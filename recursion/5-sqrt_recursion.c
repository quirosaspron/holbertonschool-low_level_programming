#include "main.h"
/**
 * checker - checks the input number from n to the base
 * @n: number is squared and compared against base
 * @base: base number to check
 * Return: natural square root of number base
 */
int checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (checker(n + 1, base));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to square
 * Return: if n does not have a natural square root -1
 *         else return the square root of the number
 */

int _sqrt_recursion(int n)
{
	return (checker(1, n));
}