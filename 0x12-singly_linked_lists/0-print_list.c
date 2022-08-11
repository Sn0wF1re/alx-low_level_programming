#include "lists.h"
/**
 *print_list - print elements of linked list
 *@h: linked list
 *
 *Return: number of elements in list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		ptr = ptr->next;
	}
	return (count);

}
