#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes nodes at index of dlistint_t list
 *@head: head of dlistint_t list
 *@index: position to delete node
 *
 *Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (!head)
		return (-1);

	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
			return (-1);
	}

	if (current->prev != NULL)
		current->prev->next = current->next;
	else
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
	}

	return (1);
}
