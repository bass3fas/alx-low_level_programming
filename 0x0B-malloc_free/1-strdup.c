#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - creat array
 * @str: var
 * Return: char
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, len;

	len = strlen(str);
	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL || str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
	p[len] = '\0';
	return (p);
}
