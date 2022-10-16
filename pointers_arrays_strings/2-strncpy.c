/**
 * _strncpy - copies a string up to n
 * @dest: Destination of the pointer to the string
 * @src: Source of the pointer to the string to copy
 * @n: Number of bytes to copy.
 * Return: Pointer to the destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[index] = src[index];
	while (index < n)
		dest[index++] == '\0';
	return (dest);
}
