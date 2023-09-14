#include "main.h"
/**
 *_isdigit -finds out if a character is a digit between 1-9  or not
 *@c: - Character that is checked
 *
 * Return: 1 if c is lowercase 0 if its not
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
