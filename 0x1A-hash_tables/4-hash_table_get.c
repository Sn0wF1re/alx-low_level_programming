#include "hash_tables.h"
/**
 *hash_table_get - retrieves a value associated with a key
 *@ht: hash table
 *@key: given key
 *
 *Return: value associated with key, NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *element;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	element = ht->array[index];

	while (element)
	{
		if (strcmp(element->key, key) == 0)
			return (element->value);
		element = element->next;
	}
	return (NULL);
}
