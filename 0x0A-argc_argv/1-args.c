#include "main.h"
#include <stdio.h>

/**
 * *main - sets  takes in arguements and displays them
 * @argv: counter for arguements or flags starts at 0
 * @argc: scharacter array for arguements or flags
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);

return (0);
}
