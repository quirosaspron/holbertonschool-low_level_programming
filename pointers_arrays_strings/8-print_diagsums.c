#include <stdio.h>
/**
 * print_diagsums - print the sum of the two diagonals of a square matrix 
 * @a: The matrix of integers
 * @size: the size of the matrix
 */

 void print_diagsums(int *a, int size)
 {
    int i = 0;
    int sumx = 0;
    int sumy = 0;

    for (i = 0; i < (size * size); i += size +1)
        sumx += a[i];
    for (i = size -1; i < (size * size - 1); i += size - 1)
        sumy += a[i];
    printf("%d, %d\n", sumx, sumy);
 }
