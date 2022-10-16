/**
 * _strncpy - copies a string up to n
 * @dest: Destination of the pointer to the string
 * @src: Source of the pointer to the string to copy
 * @n: Number of bytes to copy.
 * Return: Pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i_01 = 0;

	for (i_01 = 0; i_01 < n && src[i_01] != '\0'; i_01++)
		dest[i_01] = src[i_01];
	for ( ; i_01 < n ; i_01++)
		dest[i_01] = '\0';

	return (dest);
}


