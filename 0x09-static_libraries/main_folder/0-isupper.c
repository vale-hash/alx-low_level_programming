#include "main.h"
/**
 *_isupper -finds out if a character is upper case or not
 *@c: - Character that is checked
 *
 * Return: 1 if c is lowercase 0 if its not
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
