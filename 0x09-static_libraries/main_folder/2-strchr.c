#include "main.h"
#include <stdio.h>
/**
 * *_strchr - sets the value of a memory to another memory
 * @c: character to locate
 * @s: inputed char
 * Return: Returns a pointer to the first  of c in the string s, or NULL if the char does not exist
 */

char *_strchr(char *s, char c)
{
for (; *s != '\0'; s++)
{
if (*s == c)
{
return (s);
}
}
return (NULL);
}
