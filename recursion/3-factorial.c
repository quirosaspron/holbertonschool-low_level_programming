#include "main.h"
/**
 * factorial - returns the factorial of a number
 *
 * @n: number to get the factorial
 *
 * Return: The factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
