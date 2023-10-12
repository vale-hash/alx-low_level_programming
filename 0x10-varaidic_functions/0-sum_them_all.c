#include <stdarg.h>

/**
 * sum_them_all - function to sum all arguements
 *@n: - number of parameters in the function
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0, v;
if (n == 0)
{
return (0);
}
else
{
va_list param;
va_start(param, n);
for (int i = 0; i < n; i++)
{
    v = va_arg(param, unsigned int);
    sum = sum + v;
}
return (sum);
va_end(param);
}

}
