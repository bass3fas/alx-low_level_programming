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
	int n;

	while (1)
	{
		n = *s++;
		if (n == c)
			return (s - 1);
		if (n == 0)
			return (NULL);
	}
}
