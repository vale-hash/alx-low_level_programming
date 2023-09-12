#include "main.h"
/**
 *print_sign -prints the sign of the integer
 *@n: - Character that is checked
 *
 * Return: 1 if n is positve -1 if negative and 0 if its 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
