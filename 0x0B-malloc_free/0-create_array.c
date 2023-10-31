#include <stdlib.h>
#include "main.h"
/**
 * create_array - function to dynamically allocate an array
 *
 * @c:the char to initialize the array
 * @size:the size of the array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;
	if (size == 0)
	{
		return(NULL);
	}
	
	s = malloc(sizeof(char)*size);
		if (s == NULL)
	{
		return(NULL);
	}	
	for(i = 0; i < size; i++)
	{
		s[i] = c;
	} 

	return (s);
}
