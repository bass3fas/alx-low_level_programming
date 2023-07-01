#include "main.h"
/**
 * _strcmp - does something
 * @s1: s
 * @s2: s
 * Return: diff
 */
int _strcmp(char *s1, char *s2)
{
	int r, i;

	r = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	r = s1[i] - s2[i];
	return (r);
}

