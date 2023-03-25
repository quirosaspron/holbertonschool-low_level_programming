#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: counter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int param = 0;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		param = va_arg(list, int);
		if (separator == NULL)
		{
			printf("%d", param);
		}
		else
		{
		printf("%s %d", speparator, param);
		}
	}
	va_end(list);
	printf("\n");
}
