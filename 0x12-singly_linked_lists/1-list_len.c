#include "lists.h"

/**
 * list_len - Returns the number of nodes in a linked list
 * @h: A pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t node = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		node++;
	}
	return (node);
}
