/**
 * _strncat - this function concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to append to dest
 * Return: pointer to the resulting string dest
 */

char *_strncat( char *dest, char *src, int n)
{
	int index1 = 0;
	int index2 = 0;

	while (dest[index1] != '\0')
	{
		index1++;
	}
	while (index2 < n && src[index2] != '\0')
	{
		dest[index1 + index2] = src[index2];
		index2++;
	}
	dest[index1 + index2] = '\0';
	
	return (dest);
}
