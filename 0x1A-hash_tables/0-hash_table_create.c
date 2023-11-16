#include "hash_tables.h"
/**
 * hash_table_create - creates hash table
 * @size: size of table
 * Return: pointer to table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	/*allocate memory for new table*/
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/*allocate memory for array of pointer*/
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
		return (NULL);
	new_table->size = size;

	/*intialize all array by none*/
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
