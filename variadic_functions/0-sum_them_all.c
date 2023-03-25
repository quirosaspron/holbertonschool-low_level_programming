#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of its parameters
 * @n: counter
 * Return: the sum of its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;
	int num = 0;

	va_start(list, n);
	for (i = 0; i <= n; i++)
	{
		num = va_arg(list, unsigned int);
		sum += num;
	}
	va_end(list);
	return (sum);
}
