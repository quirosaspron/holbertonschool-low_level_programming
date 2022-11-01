#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers and prints the result
 * @argc: argument count must be exactly two numbers
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        printf("%d", a * b);
        return (0);
    }
    else
    {
        printf("Error\n");
        return (1);
    }
}