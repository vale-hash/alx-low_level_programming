#include "main.h"

/**
 * *_memcpy - sets the value of a memory to another memory
 * @dest: destination array
 * @src: soruce array that dest is going to copy
 * @n: number of elements to assign the varaible b
 * Return: returns the new string that has had its memory set
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}


return (dest);
}
