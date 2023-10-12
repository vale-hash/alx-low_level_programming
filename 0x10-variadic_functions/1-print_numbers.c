#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_numbers - function to print the numbers
 *@n: - number of parameters in the function
 *@separator : - the separator
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int v;
if (separator == NULL)
{
separator = "";
}

va_list param;
va_start(param, n);

for (int i = 0; i < n; i++)
{
v = va_arg(param, int);
printf("%d", v);

if (separator && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(param);
}
