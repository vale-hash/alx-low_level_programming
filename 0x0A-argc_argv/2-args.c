#include "main.h"
#include <stdio.h>

/**
 * *main - function that prints all arguments it receives.
 * @argv: counter for arguements or flags starts at 0
 * @argc: character array for arguements or flags
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; argc > i; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
