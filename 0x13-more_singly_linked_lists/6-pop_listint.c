#include "lists.h"
/**
 *pop_listint - delete head node of listint_t linked list
 *@head: linked list
 *
 *Return: 0 if linked list is empty, or head node's data
 */
int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *temp;
	listint_t *current;

	if (*head == NULL)
		return (0);
	current = *head;
	node_data = current->n;
	temp = current->next;
	free(current);
	*head = temp;
	return (node_data);
}
