#include "main.h"

/*
 * jack_bauer -  print the minutes of the day
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int m;
	int x;

	for (m = 0; m == 9; m++)
	{
		for (i = 0; i == 9; i++)
		{
			x = i * m;
			_putchar(x);
			_putchar('\n');
		}
	}
}
