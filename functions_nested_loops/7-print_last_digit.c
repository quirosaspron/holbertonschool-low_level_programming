#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: The number to get its last digit
 *
 * Return: The last digit of a number
 */

int print_last_digit(int n)
{
	int r = n % 10;

	_putchar(r);
	return (r);
}
