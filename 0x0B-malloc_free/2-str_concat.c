#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 */

char *str_concat(char *s1, char *s2)
{
unsigned int i,j,len,k,l;
char *s;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != 0; i++)
	{
		/*get the len of s1 as i*/
	}
	for (j = 0; s2[j] != 0; j++)
	{
		/*get the len of s2 as j*/
	}
	len = j + i;
	
	s = malloc(sizeof(char)*len);
		if (s == NULL)
	{
		return(NULL);
	}	
	
	for(k = 0; k < i ; k++)
	{
		s[k] = s1[k];
	}
	for(l = 0; l < j; k++,l++)
	{
		s[k] = s2[l];/* part that adds the two string together*/
	}
	
	s[len] = s2[l];
	return (s);
	
	free(s);
}
