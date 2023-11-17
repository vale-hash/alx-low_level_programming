#include "lists.h"

/**
 * free_list - Frees a list_t list, including its nodes and strings.
 * @head: A pointer to the head of the list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
