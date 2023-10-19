#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the first node of the  list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t sl = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		sl++;
	}

	}

return (sl);
}

