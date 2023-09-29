#include "main.h"

/**
 * *_puts_recursion - funtion to recursively print out a string
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
unsigned int i = 0;

if (s[i] == '\0')
{
_putchar('\n');
return;
}
else
{
_putchar(s[i]);
s++;
_puts_recursion(s);
}
}
