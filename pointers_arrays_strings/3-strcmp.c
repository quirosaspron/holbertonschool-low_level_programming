/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: An integer greater than, equal to, or less than 0, according as the
 * strings s1 and s2 are greater than, equal to, or less than each other.
 */
int _strcmp(char *s1, char *s2)
{
        int i = 0;

        while (s1[i] == s2[i])
        {
                if (s1[i] == '\0')
                        return (0);
                i++;
        }

        return (s1[i] - s2[i]);
}

