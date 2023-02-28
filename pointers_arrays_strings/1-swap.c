#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of a and b
 *
 * @a: the pointer that will be swaped to b
 * @b: the pointer that will be swaped to a
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
