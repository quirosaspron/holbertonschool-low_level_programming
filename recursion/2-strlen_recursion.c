#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a function.
 * @s: The string to be measured.
 * Return: The lenght of the string
 */

int _strlen_recursion(char *s)
 {
    int len = 0;

    if (*s)
    {
        len++;
        len += _strlen_recursion(s + 1);
    }

    return (len);
 }