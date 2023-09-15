#include "main.h"

/**
 * print_line - function to print a line as many tim as n
 *@n: - number of times underscore is gonna be printed
 * Return: 0
 */
void print_line(int n)
{
int c;
for (c = 1; c <= n - 1; c++)
{
_putchar(95);
if (n <= 0)
{
_putchar('\n');
}
}
_putchar('\n');
}
