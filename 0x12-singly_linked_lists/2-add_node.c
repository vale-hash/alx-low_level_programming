#include "lists.h"
/**
 * add_node - Add a new node to the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the list
 * @str: The string to be stored in the new node
 * Return: A pointer to the newly added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode;

	nnode = malloc(sizeof(list_t));

	if (nnode == NULL)
		return (NULL);

	nnode->str = strdup(str);
	nnode->len = _strlen(str);
	nnode->next = *head;
	*head = nnode;

	return (nnode);
}
