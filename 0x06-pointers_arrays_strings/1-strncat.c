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
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (dest);
}
