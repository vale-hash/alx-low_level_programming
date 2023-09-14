#include <stdio.h>

/**
 * print_most_numbers - function to print 0-9 with the exception of 2&4
 *
 * Return: 0
 */
void print_most_numbers(void)
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
