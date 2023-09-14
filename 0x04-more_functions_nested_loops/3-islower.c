#include "main.h"
/**
 *_islower -finds out if a character is lower case or not
 *@c: - Character that is checked
 *
 * Return: 1 if c is lowercase 0 if its not
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
