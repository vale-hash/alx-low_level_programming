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
	int x;
	int y;
	int add;

	(void)argv;
	add = 0;
	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (!isdigit(argv[x][y]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[x]);
		}
	}
	printf("%d\n", add);
	return (0);
}
