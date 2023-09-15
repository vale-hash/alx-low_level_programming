#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function to print 0-14
 */
void more_numbers(void)
{
int i, j, c;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
_putchar('1');
c = '0' + (j - 10);
}
else
{
c = '0' + j;
}

_putchar(c);
}
putchar('\n');
}

}
