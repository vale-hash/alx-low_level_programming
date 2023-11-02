#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function to dynamically asign memmory
 *
 * @b: the char to initialize the array
 * Return: s
 */

void *malloc_checked(unsigned int b)
{
void *s;

	s = malloc(b);
		if (s == NULL)
	{
		exit (98);
	}
	return (s);
}
