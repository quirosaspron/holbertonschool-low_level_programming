/**
 * _memcpy - copies memory area
 * @dest: the pointer to memory area 'dest' to paste
 * @src: the pointer to memory area 'src' to copy
 * @n: number of bytes to copy
 * Return: pointer to memory area 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i <n; i++)
        dest[i] = src[i];
    return (dest);

}