#include <stdio.h>
#include "main.h"
/**
 * _strspn - does something
 * @s: var
 * @accept: var
 * Return: char
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				k++;
		}
		if (k == 0)
			break;
	}
	return (i);
}
