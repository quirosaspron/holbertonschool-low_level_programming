#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: the string to be printed between strings
 * @n: counter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *param;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		param = va_arg(list, char *);
		if (i == 0)
		{
			printf("%s", param);
		}
		else if (separator == NULL)
		{
			printf("%s", param);
		}
		else if (param == NULL)
		{
			printf("%s(nil)", separator);
		}
		else
		{
		printf("%s%s", separator, param);
		}
	}
	va_end(list);
	printf("\n");
}
