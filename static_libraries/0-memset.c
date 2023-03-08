/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area to fill
 * @b: The byte to fill the memory area with
 * @n: The number of bytes to fill
 *
 * Return: A pointer to the filled memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ptr[i] = b;
	}

	return (s);
}

