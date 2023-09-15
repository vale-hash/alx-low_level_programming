#include "main.h"

/**
 * print_triangle - prints a triangle of a specified size
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}

int row, column;

for (row = 1; row <= size; row++)
{
for (column = 1; column <= size; column++)
{
if (column <= size - row)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}

