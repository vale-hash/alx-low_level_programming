#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t leng;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (leng = 0; str[leng]!='\0'; leng++)
		;

	new_node->len = leng;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
