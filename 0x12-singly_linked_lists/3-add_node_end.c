#include "lists.h"
/**
 * add_node_end - Add a new node to the end of a linked list.
 * @head: A pointer to a pointer to the head of the list
 * @str: The string to be stored in the new node
 * Return: A pointer to the newly added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode, *tmp;

	nnode = malloc(sizeof(list_t));

	if (nnode == NULL)
		return (NULL);

	nnode->str = strdup(str);
	nnode->len = _strlen(str);
	nnode->next = NULL;

	if (!*head)
	{
		*head = nnode;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		{
			tmp->next = nnode;
		}
	}
	return (nnode);
}
