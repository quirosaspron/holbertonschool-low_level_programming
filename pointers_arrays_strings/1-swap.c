/**
 *swap_int - swaps the value of two integrers
 *
 * @a: int to swap with b
 *
 * @b: int to swap with a
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
