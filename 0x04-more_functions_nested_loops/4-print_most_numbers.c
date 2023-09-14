#include <stdio.h>

/**
 * print_numbers - function to print 0-9
 *
 * Return: 0
 */
void print_numbers(void)
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
