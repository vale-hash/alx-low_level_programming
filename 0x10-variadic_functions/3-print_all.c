#include "variadic_functions.h"
/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: Just Nothing.
 */

void print_all(const char * const format, ...)
{
	int index, findic;
	char *str;
	va_list pr_list;

	index = 0;

	va_start(pr_list, format);
	while (format != NULL && format[index] != '\0')
	{
		switch (format[index])
		{
			case 'i':
				printf("%i", va_arg(pr_list, int));
				findic = 0;
				break;
			case 's':
				str = va_arg(pr_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				findic = 0;
				break;
			case 'c':
				printf("%c", va_arg(pr_list, int));
				findic = 0;
				break;
			case 'f':
				printf("%f", va_arg(pr_list, double));
				findic = 0;
				break;
			default:
				findic = 1;
				break;
		}
		if (findic == 0 && format[index + 1] != '\0')
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(pr_list);
}
