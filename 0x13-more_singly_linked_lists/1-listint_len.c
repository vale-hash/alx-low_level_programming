#include "lists.h"
/**
 * listint_len - function to print all the element of the linked list.
 * @h: head of the list
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	count = 0;
	while (h != NULL)
	{
		h = h ->next;
		count++;
	}
/*printf("%lu", count);*/
return (count);
}
