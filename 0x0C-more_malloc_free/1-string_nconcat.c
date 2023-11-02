#include "main.h"
#include <stdlib.h>
/**
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *sn;
unsigned int i, j, len2;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		/*len2 is len of s2*/
	}   
	sn = malloc(sizeof(char) * n);
	if (sn == NULL)
	{
		return (NULL);
	}

	if (len2 < n)
	{
		for (i = 0; s2[i] != s2[n]; i++)
		{
			sn[i] = s2[i];
		/*i is the len of sn*/
		}
	}else
	{
		sn = s2;
	}
	
	for (j = 0; s1[j] != '\0'; j++)
	{
		/*j is the len of s1*/
	}
	
	
}	
