#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *main - function that  multiplies two numbers..
 * @argv: counter for arguements or flags starts at 0
 * @argc: character array for arguements or flags
 * Return: returns 0
 */


int main(int argc, char *argv[])
{
int result = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (int i = 1; i < argc; i++)
{
char *endptr;
long num = strtol(argv[i], &endptr, 10);

if (*endptr != '\0' || num <= 0)
{
printf("Error\n");
return (1);
}

result += (int)num;
}

printf("%d\n", result);
return (0);
}


