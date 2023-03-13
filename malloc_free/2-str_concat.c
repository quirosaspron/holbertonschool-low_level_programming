#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1: string to be concatenated to
  * @s2: string to be concatenated
  * Return: A pointer to the concatenated final string
  */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j = 0;
	char *str_concat;
	int len_concat = 0;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;
	for (i = 0; s1[i] || s2[i]; i++)
	{
		len_concat++;
	}
	str_concat = malloc(sizeof(char) * (len_concat));
	if (str_concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		str_concat[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		str_concat[j++] = s2[i];
	}
	str_concat[j] = '\0';
	return (str_concat);
	free (str_concat);
}
