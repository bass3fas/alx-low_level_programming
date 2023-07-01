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
	int i, k;

	for (i = 0; src[i] != '\0'; i++)
                ;
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	if (n >= i)
		dest[i] = '\0';
	return (dest);
}
