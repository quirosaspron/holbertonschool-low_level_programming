/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to beginning of located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == 0)
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			for (; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return (NULL);
}
