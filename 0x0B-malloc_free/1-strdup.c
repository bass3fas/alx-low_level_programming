#include "main.h"
/**
 * _strdup - does something
 * @str : string
 * Return: char
 */
char *_strdup(char *str)
{
	char *array;
	int len = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	array = malloc((len + 1) * sizeof(char));
	if (array == NULL || len == 0)
		return (NULL);
	while (i <= len + 1)
	{
		array[i] = str[i];
		i++;
	}
	return (array);
}
