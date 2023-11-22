#include "lists.h"
/**
 * print_listint - function to print all the element of the linked list.
 * @h: head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;
	count = 0;
	while (h != NULL)
	{
		printf("%d", h->n);
		h = h ->next;
		count++;
	}
return (count);
}
