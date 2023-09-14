#include <stdio.h>

/**
 * more_numbers - function to print 0-14 ten times
 *
 * Return: 0
 */
void more_numbers(void)
{
int c, j;
for (j = 0; j <= 10; j++)
{
for (c = 0; c <= 14; c++)
{
putchar(c);
}
putchar('\n');
}
putchar('\n');
}
