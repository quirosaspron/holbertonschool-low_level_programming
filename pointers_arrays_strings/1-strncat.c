/**
 * _strncat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int dest_len, i;

        dest_len = 0;
        while (dest[dest_len] != '\0')
                dest_len++;

        for (i = 0; i < n && src[i] != '\0'; i++)
                dest[dest_len + i] = src[i];

        dest[dest_len + i] = '\0';

        return (dest);
}
