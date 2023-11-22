#include "lists.h"
/**
 * listint_len - function to print all the element of the linked list.
 * @h: head of the list
 * Return: the number of nodes in the list
 */
/*size_t listint_len(const listint_t *h)*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /*creating a new node*/
	
	new_node = malloc(sizeof(listint_t));/*assigning memory to the new node*/
	
	if (new_node == NULL)
		return NULL;	/*making sure the node isn't  NULL and handling the condition*/

	new_node->n = n; /*assigning the const int n to the node*/
	
	new_node->next = *head;

	*head = new_node;

return (new_node);
}
