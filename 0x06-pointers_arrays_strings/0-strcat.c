#include "main.h"
/**
 * *_strcat - Print half of string.
 * @dest: destination string
 * @src:  source string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{ /*get the lenght of the destination as i*/
for (j = 0; src[j] != '\0'; j++)
{	/*get the lenght of the src string as j*/
dest[i + j] = src[j];
}
}
return (dest);
}
