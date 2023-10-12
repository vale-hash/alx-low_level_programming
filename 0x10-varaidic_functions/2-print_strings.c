#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_strings - function to print the numbers
 *@n: - number of parameters in the function
 *@separator : - the separator
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
const char *v;
if (separator == NULL)
{
separator = "";
}

va_list param;
va_start(param, n);

for (int i = 0; i < n; i++)
{
v = va_arg(param, const char *);
printf("%s", v);

if (i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(param);
}
