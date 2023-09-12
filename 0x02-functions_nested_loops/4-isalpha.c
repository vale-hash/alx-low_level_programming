#include "main.h"
/**
 *_isalpha -finds out if a character is upper case or not
 *@c: - Character that is checked
 *
 * Return: 1 if c is upper 0 if its not
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z')||(c>'a' && c <= 'z' ))
{
return (1);
}
else
{
return (0);
}
}
