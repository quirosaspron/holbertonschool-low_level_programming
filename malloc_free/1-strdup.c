#include <stdlib.h>

/**
  * _strdup - duplicates a string
  * @str: string to be duplicated
  * Return: A pointer to the duplicated string
  */

char *_strdup(char *str)
{
	char *strdup;
	int i;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len = i;
	}

	strdup = malloc(sizeof(char) * (len + 2));

	for (i = 0; i <= len; i++)
	{
		strdup[i] = str[i];
	}
	return (strdup);
}
