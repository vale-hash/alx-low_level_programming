#include <stdlib.h>
#include "main.h"
/**
 * array_range - function to dynamically allocate an array
 *
 * @min: minimum  alue in the array
 * @max: maximum number in the array
 * Return: s
 */

int *array_range(int min, int max)
{
unsigned int i;
int *s;
unsigned int range;


	if (min > max)
		return (NULL);
	
	range = max - min;

	s = malloc(sizeof(int) * (range + 1));
		if (s == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i <= range; i++, min++)
	{
		s[i] = min ;
	}
	return (s);
}
