#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * _strdup - creat array
 * @str: var
 * Return: char
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
	p[len] = '\0';
	return (p);
}
