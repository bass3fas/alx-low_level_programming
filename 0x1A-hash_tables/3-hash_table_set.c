#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add/update the key/value.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	/*check invalid parameter*/
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	/*get index, make key from the right class*/
	index = key_index((const unsigned char *)key, ht->size);

	/*check for collision*/
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = strdup(value);
			return (1);
		}

		temp = temp->next;
	}
	 /* Create a new node and set its values */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}