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

    /* Check for invalid parameters */
    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    /* Get the index where the key should be stored */
    index = key_index((const unsigned char *)key, ht->size);

    /* Check for collision */
    temp = ht->array[index];
    while (temp != NULL)
    {
        /* If key already exists, update the value and return success */
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value);
            temp->value = strdup(value);
            if (temp->value == NULL)
                return (0);
            return (1);
        }
        temp = temp->next;
    }

    /* Create a new node and set its values */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);
    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }
    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    /* Add the new node at the beginning of the list (collision resolution) */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}
