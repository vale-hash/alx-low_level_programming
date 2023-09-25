#include "main.h"

/**
 * *_memset - sets the value of aa memory to a spcific character
 * @b: varaile holding the char to assign
 * @s: the array to have its values changed
 * @n: number of elements to assign the varaible b
 * Return: returns the new string that has had its memory set
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
