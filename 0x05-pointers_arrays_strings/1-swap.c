#include "main.h"

/**
 * swap_int - function to set a the value of two pointer and swaps them
 *@a: - furst vaurable to be swappped
 *@b: - second varaible to be swaped
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int c;
c = *b;
*b = *a;
*a = c;
}
