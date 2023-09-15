#include "main.h"

/**
 * print_square - function to print a sqaures with n dimensions
 *@size: - lenght of sqaure
 * Return: 0
 */
void print_square(int size)
{
int c, j;
for (j = 1; j <= size; j++)
{
for (c = 1; c <= size; c++)
{
_putchar('#');
}
_putchar('\n');
}
_putchar('\n');
}
