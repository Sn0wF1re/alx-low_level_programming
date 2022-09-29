#include "lists.h"
/**
 *add_dnodeint - add new node at the beiginning of dlistint_t list
 *
 *@head: head of dlistint_t list
 *@n: data to be inserted
 *
 * Return: address of new element, NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
