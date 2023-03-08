/**
 * _strpbrk - Locates the first occurrence in the s string of
 * any of the bytes in the string accept
 * @s: string to be searched
 * @accept: string of bytes to be searched for
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept or NULL if no bytes are found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
	{
		if (*s == accept[i])
		return (s);
	}
	s++;
	}
	return ('\0');
}
