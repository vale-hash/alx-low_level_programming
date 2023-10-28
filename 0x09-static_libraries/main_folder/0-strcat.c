#include "main.h"
/**
 * *_strcat - Print half of string.
 * @dest: destination string
 * @src:  source string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int len1, len2;
for (len1 = 0; dest[len1] != '\0'; len1++)
{ /*get the lenght of the destination as i*/
for (len2 = 0; src[len2] != '\0'; len2++)
{	/*get the lenght of the src string as j*/
dest[len1 + len2] = src[len2];
}
dest[len1 + len2] = '\0';
}
return (dest);
}
