#include "main.h"
/**
 * print_rev - function to reverse a string
 *@s: - the string to be printed
 * Return: 0
 */
void print_rev(char *s)
{
int i, d;
char c;
for (i = 0; s[i] != '\0'; i++)
{

}

for (d = i - 1; d >= 0; d--)
{
c = s[d];
_putchar(c);
}

_putchar('\n');
}
