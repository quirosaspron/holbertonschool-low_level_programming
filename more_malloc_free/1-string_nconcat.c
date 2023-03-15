#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: The string to be concatenated to.
 * @s2: The string to be concatenated
 * @n: Number of bytes of s2 to be concatenated
 * Return: Pointer to the newley allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, rm_s2, i, j;
	char *str_ncnct;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;
	for (len_s1 = 0; s1[len_s1]; len_s1++)
	{}
	for (len_s2 = 0; s2[len_s2]; len_s2++)
	{}
	if (n >= len_s2)
	{
		n = len_s2;
	}
	rm_s2 = len_s2 - n;
	str_ncnct = malloc(sizeof(char) * (len_s1 + (len_s2 - rm_s2) + 1));
	if (str_ncnct == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		str_ncnct[j++] = s1[i];
	}
	for (i = 0; i <= n; i++)
	{
		str_ncnct[j++] = s2[i];
	}
	str_ncnct[j] = '\0';
	return (str_ncnct);
}
