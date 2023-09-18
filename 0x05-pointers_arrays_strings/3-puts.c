#include "main.h"
/**
 * _puts - function to display a string
 *@str: - the string to be printed
 * Return: 0
 */
void _puts(char *str)
{
int i;
char c;
for (i = 0; str[i] != '\0'; i++)
{
c = str[i];
_putchar (c);
}
_putchar('\n');
}
