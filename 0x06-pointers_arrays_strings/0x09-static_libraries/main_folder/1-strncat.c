#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: type char str
 * @src: type char str
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{

}
for (j = 0; src[j] != '\0' && n > 0; i++, n--, j++)
{
dest[i] = src[j];
}
return (dest);
}
