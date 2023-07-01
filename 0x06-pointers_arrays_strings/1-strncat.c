#include "main.h"
/**
 * _strncat - does something
 * @dest: var
 * @src: var
 * @n: var
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (k = 0; k < n && src[k] != '\0'; k++)
		    dest[i + k] = src[k];
	return (dest);
}
