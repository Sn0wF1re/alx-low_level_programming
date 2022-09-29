#include "lists.h"
/**
 *add_dnodeint_end - add new nodeat the end of dlistint_t list
 *@head: dlistint_t head
 *@n: data for new node
 *
 *Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (current->next != NULL)
		current = current->next;
	new_node->prev = current;
	current->next = new_node;

	return (new_node);
}
