/**
 * _strchr - locates a character in a string
 * @s: the pointer to the string
 * @c: the character to find
 * Return: pointer to the first occurrence of the character c in the string s 
 *         or NULL if the character is not found
 */

 char *_strchr(char *s, char c)
 {
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
        if (s[i] == c)
            return (s[i]);
    }
    return ('\0');
 }