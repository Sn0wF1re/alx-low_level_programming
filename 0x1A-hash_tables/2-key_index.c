#include "hash_tables.h"
/**
 *key_index - returns index at which key/value pairs should be stored
 *in the array of the hash table
 *@key: the key
 *@size: size of the array of the hash table
 *
 *Return: index where key/value pairs should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
