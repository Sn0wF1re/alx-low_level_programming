#include "hash_tables.h"
/**
 *hash_table_set - add an element to the hash table
 *@ht: hash table
 *@key: key of new node
 *@value: value associated with the key
 *
 * Return: 0 on failure, 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *value_cpy;
	unsigned long int i, index;

	if (!ht || !key || !value)
		return (0);
	value_cpy = strdup(value);

	if (!value_cpy)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	i = index;

	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cpy;
			return (1);
		}
		i++;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(value_cpy);
		return (0);
	}
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value_cpy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
