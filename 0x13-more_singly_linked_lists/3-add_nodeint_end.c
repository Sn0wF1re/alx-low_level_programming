#include "lists.h"
/**
 *add_nodeint_end - add new node to end of listint_t list
 *@head: double pointer to end of list
 *@n: data in new node
 *
 *Return: address to new_node, NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last;

	last = malloc(sizeof(listint_t));
	last = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
