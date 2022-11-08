#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The number to be raised.
 * @y: The number of the exponent.
 * Return: if y < 0 return -1
 *         else return the value of x raised to y. 
 */

int _pow_recursion(int x, int y)
{
    int result = x;

    if (y < 0)
        return (-1);

    else if (y == 0)
        return (1);

    result *= _pow_recursion(x, y - 1); 
    
    return (result);
 }