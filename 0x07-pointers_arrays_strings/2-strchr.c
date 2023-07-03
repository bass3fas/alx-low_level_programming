#include <stdio.h>
#include "main.h"
/**
 * _strchr - does something
 * @s: var
 * @c: var
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else
			s++;
	}
	return (NULL);
}
