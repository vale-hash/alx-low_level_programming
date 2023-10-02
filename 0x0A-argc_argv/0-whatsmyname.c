#include "main.h"

/**
 * *main - sets  takes in arguements and displays them
 * @argv: destination array
 * @argc: soruce array that dest is going to copy
 * Return: returns the new string that has had its memory set
 */

int main(int argc, char *argv[])
{
char *j;
j = argv[0];
for (argc = 0; j[argc] != '\0'; argc++)
{
_putchar(j[argc]);
}
_putchar('\n');
return (0);
}
