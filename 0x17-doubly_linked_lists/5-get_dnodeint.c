#include "lists.h"
/**
 *get_dnodeint_at_index - returns nth node of dlistint_t list
 *@head: dlistint_t list head
 *@index: index of the node
 *
 *Return: nth node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head)
	{
		if (!head)
			return (NULL);
		if (x == index)
			return (head);
		head = head->next;
		x++;
	}
	return (head);
}
