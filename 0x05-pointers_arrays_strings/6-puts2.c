#include "main.h"
/**
 * puts2 - function to display a string incremented by 2
 *@str: - the string to be printed
 * Return: 0
 */
void puts2(char *str)
{
int i;
char c;
for (i = 0; str[i] != '\0'; i = i + 2)
{
while (str[i] != '\0')
{c = str[i];
_putchar (c);
}
}
_putchar('\n');
}
