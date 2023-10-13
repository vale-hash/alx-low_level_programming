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
	va_list valist;
	char *separatorstr;
	int x;

	if (n < 1)
	{
		printf("\n");
		return;
	}
	va_start(valist, n);
	x = 0;

	while (x < (int) n)
	{
		separatorstr = va_arg(valist, char *);
		if (separatorstr != NULL)
			printf("%s", separatorstr);
		else
			printf("(nil)");
		if (separator != NULL && x != (int) n - 1)
			printf("%s", separator);
		x++;
	}
	printf("\n");
	va_end(valist);
}
