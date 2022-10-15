/**
 * _strlen - get the lenght of a string
 *
 * @s: string to check its lenght
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);

}
