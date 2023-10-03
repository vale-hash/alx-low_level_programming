#include "main.h"
#include <stdio.h>
/**
 * _strspn- get the value of a subsect f a string
 * @accept: char we check pattern from
 * @s: soruce array that dest is going to copy
 * Return: returns the pointer of the char c that first appaers
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int init_len;
int len1, len2, j, i, match;

len1 = _strlen(s);
len2 = _strlen(accept);

for (j = 0; j < len1; j++)
{
match = 0;
for (i = 0 ; i < len2; i++)
{
if (s[j] == accept[i])
{
match = 1;
break;
}
if (match == 0)
break;
else
init_len++;
}

}
return (init_len);

}
