#include "lists.h"
/**
 *get_nodeint_at_index - get nth node of a linked list
 *@head: linked list
 *@index: index of node
 *
 *Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *list = head;
	unsigned int i;

	for (i = 0; list && i < index; i++)
	{
		list = list->next;
	}
	return (list ? list : NULL);
}
