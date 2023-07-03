#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - does something
 * @s: var
 * @accept: var
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int n, i;

	while (1)
	{
		n = *s++;
		i = *accept;
		while (i != '\0')
		{
			if (n == i)
				return (s - 1);
			i++;
		}
		if (n == 0)
			return (NULL);
	}
}
