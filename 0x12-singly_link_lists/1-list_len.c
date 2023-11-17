#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to first element in singly linked list.
 * Return: counter.
 */

size_t list_len(const list_t *h)
{
	size_t NodeCount;

	NodeCount = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			h = h->next;
			NodeCount++;
		}
	}
	return (NodeCount);
}
