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
int i, mul1 = atoi(argv[1]), mul2;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
for (i = 1; i < argc; i++)
{
mul2 = atoi(argv[2]);
}
printf("%d\n", mul1 * mul2);
}
return (0);
}
