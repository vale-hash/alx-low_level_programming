#include "main.h"

/**
 *is_prime_number -funtion to find the the value of x raised to power y
 * @n: the base number
 * Return: returns the 1 or 0 as true oe false
 */

int is_prime_number(int n)
{
int i = 0;
if (n <= 1)
{
return (0);
}
if (n == 2)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
if (i >= n / 2)
{
return (1);
}
return (is_prime_number(n));
i++;
}

