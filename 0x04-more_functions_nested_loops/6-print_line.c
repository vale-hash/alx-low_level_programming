#include <stdio.h>

/**
 * print_line - function to print a line as many tim as n
 *@n: - number of times underscore is gonna be printed
 * Return: 0
 */
void print_line(int n)
{
int c;
for (c = 0; c <= n; c++)
{
putchar(95);
}
putchar('\n');
}
