#include "main.h"
/**
 * _print_rev_recursion -: function to recursively print a string
 * 
 * @s: string to be printed
 *
 * Return: nothing
 */
 int _strlen_recursion(char *s)
{
    if (*s == '\0') 
    {
        return 0; /* Base case: an empty string*/
    } 
    else 
    {
        return 1 + _strlen_recursion(s + 1);
	/* Recursively call the function for the rest of the string */
    }	
    return (_strlen_recursion(s + 1));
}
