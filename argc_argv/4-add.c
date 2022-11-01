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
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        print("%d", a * b);
        return 0;
    }
    else
    {
        print("Error\n");
        return (1);
    }
}