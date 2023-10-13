#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: pointer param
 * @n: param:wq
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
if (separator == NULL)
{
separator = "";
}
va_list param;
va_start(param, n);

for (int i = 0; i < n; i++)
{
const char *str = va_arg(param, const char *);
printf("%s", str);

if (i < n - 1)
{
printf("%s", separator);
}
}

printf("\n");
va_end(param);
}
