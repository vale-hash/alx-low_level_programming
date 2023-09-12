#include "main.h"
/**
 *print_alphabet_x10 -writes characters a-z with 10 rows to stdout
 *
 * Description: Prints the word putchar
 * Return: Always 0 (Success)
 */
int print_alphabet_x10(void)
{
int i;
char c;
for (c = 97; c < 123; c++)
{
_putchar(c);
for (i = 0; i < 10; i++)
  {
_putchar('\n');
  }
}
return (0);
}
