/**
 * is_prime_number_helper - checks if n is prime
 * @n: the number to check
 * @i: the divisor to check against
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (i == n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_number_helper(n, i + 1));
}

/**
 * is_prime_number - checks if a given integer is a prime number or not
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));
}

