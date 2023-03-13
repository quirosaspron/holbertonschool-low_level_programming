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
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	strdup = malloc(sizeof(char) * (len + 1));

	for (i = 0; i <= len; i++)
	{
		strdup[i] = str[i];
	}
	return (strdup);
	free (strdup);
}
