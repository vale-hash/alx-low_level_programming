#include "main.h"
/**
 *_abs -prints the absolute value of an integer
 *@n: - Character that is checked
 *
 * Return: 1 if n is positve -1 if negative and 0 if its 0
 */
int _abs(int n)
{
int x;
if (n > 0)
{
x = (n * 1);
return (x);
}
else if (n < 0)
{
x = (n * -1);
return (x);
}
else
{
return (0);
}
}
