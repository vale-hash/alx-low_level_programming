#include "main.h"

/**
 *_pow_recursion -funtion to find the the value of x raised to power y
 * @x: the base number
 * @y: the power
 * Return: returns the value of x raised by y
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
if (y < 0)
{
return (-1);
}
return (x * _pow_recursion(x, y - 1));
}

