#include "main.h"
/**
 * _strlen - function to get the lenght of a string
 *@s: - the string which the lenght would be gotten
 * Return: 0
 */
int _strlen(char *s)
{
int i;
char c;
for (i = 0; s[i] != '\0'; i++)
{
c = (s[i]);
_putchar(c);
}
return (0);
}
