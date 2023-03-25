#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: format string of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				separator = va_arg(args, char *) ? "" : "(nil)";
				printf("%s%s", separator, va_arg(args, char *));
				break;
		}
		separator = ", ";
		i++;
	}

	va_end(args);

	printf("\n");
}
