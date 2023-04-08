/**
 * flip_bits - returns # of bits needed to flip from one number to another
 * Return: # of bits needed to flip from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;
    
	while (xor_result)
	{
		if (xor_result & 1)
		{
			count++;
			xor_result >>= 1;
		}
	}
	return (count);
}
