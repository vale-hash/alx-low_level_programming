#include <stdio.h>

/**
 * print_alphabet - function to print abc
 *
 * Return: 0
 */
int main(void)
{
char c;

for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
