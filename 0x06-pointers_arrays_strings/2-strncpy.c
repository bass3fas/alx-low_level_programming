#include "main.h"
/**
 * _strncpy - does something
 * @dest: var
 * @src: var
 * @n: var
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	for (; k < n; k++)
		dest[k] = '\0';
	return (dest);
}
