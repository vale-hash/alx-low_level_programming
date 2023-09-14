#include <stdio.h>

/**
 * print_most_numbers - function to print 0-9 with the exception of 2&4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
if (c != '2' && c != '4')
{
putchar(c);
}
}
putchar('\n');
}
