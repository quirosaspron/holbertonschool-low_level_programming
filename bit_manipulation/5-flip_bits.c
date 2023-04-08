/**
 * flip_bits - Returns # of bits needed to flip from numbers
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits = 0;
	unsigned long int xor_result;

	xor_result = n ^ m;
	while (xor_result)
	{
		num_bits += (xor_result & 1);
		xor_result >>= 1;
	}
	return (num_bits);
}





