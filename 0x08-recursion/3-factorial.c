#include "main.h"

/**
 *factorial -funtion to recursively find the factorial of a number n
 * @n: the number to find th factorial of
 * Return: returns the factorial of n
 */

int factorial(int n)
{
if (n == 0)
{
return (1);
}
if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}

