#include "lists.h"
/**
 *add_node - add new node to beginning of linked list
 *@head: double pointer
 *@str: data for new node
 *
 *Return: Address of new element, NULL if otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup = strdup(str);
	int len = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	new_node->len = len;
	new_node->str = dup;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
