#include "lists.h"
/**
 * listint_len - function to print all the element of the linked list.
 * @h: head of the list
 * Return: the number of nodes in the list
 */
/*size_t listint_len(const listint_t *h)*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node; /*creating a new node*/
	end_node = malloc(sizeof(listint_t));
	
	listint_t *h = *head;

	if(end_node != NULL)
	{
		end_node->n = n;
		end_node->next = NULL;
	}
	
	else 
		return (NULL);
	
	if(h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = end_node;
	}
	else 
		*head = end_node;

return (end_node);
}
