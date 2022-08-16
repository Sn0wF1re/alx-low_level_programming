#include "lists.h"
/**
 *delete_nodeint_at_index - delete node at index of listint_t list
 *@head: double pointer to listint_t list
 *@index: index at which to delete node
 *
 *Return: 1 if success, -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *node = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
	}
	node = temp->next;
	temp->next = node->next;
	free(node);
	return (1);
}
