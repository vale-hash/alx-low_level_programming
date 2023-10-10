#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory using malloc
 * @b: value to create memory for
 * Return: returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
return (p);
}
