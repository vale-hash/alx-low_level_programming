#include "main.h"

/**
 *_strlen_recursion -funtion to recursively print out a string in reverse
 * @s: string to be printed
 * Return: returns the lenght of the string
 */

int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
