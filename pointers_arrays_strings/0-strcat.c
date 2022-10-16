/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer to the destination string
 *
 * @src: pointer to the source string
 *
 * Return: pointer to dest string
 */

char *_strcat(char *dest, char *src)
{
	int index1 = 0;
	int index2 = 0;

	while (dest[index1] != '\0')
	{
		index1++;
	}
	while (src[index2] != '\0')
	{
		dest[index1 + index2] = src[index2];
		index2++;
	}
	dest[index1 + index2] = '\0';

	return (dest);
}

