/**
 * _strcmp - compares two strings, ending at the first byte that is different.
 * @s1: string to be compared
 * @s2: string to compare by
 * Return: the difference between the first character that are not the same
 */


int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}

