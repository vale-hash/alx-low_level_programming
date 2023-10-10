#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings. and allocates memor to them
 * @s1: first string.
 * @s2: second string.
 * @n: limit for adding the second string
 * Return: pointer of an array of chars
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strncat;
	unsigned int len1, len2, k, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;/* find the lenght of s1 and assign to len1*/

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;/*same as above just the lenght of s2*/

if (n >= len2)
{
n = len2;
}
strncat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (strncat == NULL)
	{
		free(strncat);
		return (NULL);
	}

	for (k = 0; k < len1; k++)
		strncat[k] = s1[k];

	for (i = 0; i < n; k++, i++)
		strncat[k] = s2[i];

	return (strncat);
}
