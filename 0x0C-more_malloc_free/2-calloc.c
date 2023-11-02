#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function to dynamically allocate an array
 *
 * @nmemb: the char to initialize the array
 * @size: the size of the array
 * Return: s
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
void *s;
char *p;
	if (nmemb <= 0 || size <= 0)
		return (NULL);
	
	s = malloc(size * nmemb);
		if (s == NULL)
	{
		return (NULL);
	}
	
	p = (char *)s;
	for (i = 0; i < nmemb *size; i++)
	{
		p[i] = 0;
	}
	return (p);
}
