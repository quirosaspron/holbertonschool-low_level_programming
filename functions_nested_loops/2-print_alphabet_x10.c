#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: On success 1.
 */

void print_alphabet_x10(void)
{
	int a;

	for (a = 1; a <= 10; a++)
	{
		print_alphabet();
		_putchar('\n');
	}
}
