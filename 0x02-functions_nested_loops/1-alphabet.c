#include "main.h"
/**
 * print_alphabet -writes characters a-z to stdout
 *
 * Description: Prints the word putchar
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
char c;
for (c = 97; c < 173; c++)
{
_putchar(c);
}
return (0);
}
