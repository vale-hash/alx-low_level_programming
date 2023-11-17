#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to first element in singly linked list.
 * Return: counter.
 */

size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
