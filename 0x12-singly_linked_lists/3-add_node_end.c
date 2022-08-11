#include "lists.h"
/**
 *add_node_end - add new node at the end of linked list
 *@head: double pointer to head
 *@str: data string in linked list
 *
 *Return: address of new element, NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node = *head;
	char *dup = strdup(str);
	int len = 0;

	new_node = malloc(sizeof(list_t));
	new_node->str = dup;
	new_node->next = NULL;
	while (str[len])
	{
		len++;
	}
	new_node->len = len;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
		return (new_node);
	}
}
