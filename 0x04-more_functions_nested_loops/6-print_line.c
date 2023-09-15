#include <stdio.h>

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
putchar(95);
}
putchar('\n');
}
