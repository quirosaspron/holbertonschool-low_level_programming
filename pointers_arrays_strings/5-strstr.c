/**
 * _strstr - fidn the first occurrence of the substrng needle in the string haystack 
 * @haystack: segment to compare bytes from
 * @needle: substring to look for in haystack
 * Return: a pointer to the beginning of the located substring or NULL if not found
 */

 char *_strstr(char *haystack, char *needle)
 {
    int i;

    while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
 }
