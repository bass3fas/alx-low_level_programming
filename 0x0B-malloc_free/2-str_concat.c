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
 * str_concat - creat array
 * @s1: var
 * @s2: var
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, len1, len2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		if (s1 == NULL)
			return (NULL);
		*s1 = ' ';
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		if (s2 == NULL)
			return (NULL);
		*s2 = '';
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	for (i = len1; i < len1 + len2; i++)
		p[i] = s2[i - len1];
	p[len1 + len2] = '\0';
	return (p);
}
