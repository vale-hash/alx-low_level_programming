#include "variadic_functions.h"
/**
 *
 * sum_them_all - adds up all the parameters passed
 * @n: number of arguements
 * Return: addition
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list list;
 	unsigned int sum , i;
	
	sum = i = 0;

	va_start(list,n);
	if (n == 0)
	{
		return (0);
	}

	for (; i < n; i++)
	{

		sum = sum + va_arg(list, const unsigned int);
	}
	
	va_end(list);
	return (sum);
}
