#include "main.h"
/**
 *print_last_digit -prints the absolute value of an integer
 *@n: - Character that thr last digit is found
 *
 * Return: 1 if n is positve -1 if negative and 0 if its 0
 */
int print_last_digit(int n)
{
int x;
if (n > 0)
{
x = n % 10;
_putchar(x + '0');
return (x);
}
else
{
x = (n * -1) % 10;
_putchar(x + '0');
return (x);
}

}

