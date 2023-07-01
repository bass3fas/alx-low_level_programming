#include "main.h"
/**
 * _strcat - does something
 * @dest: var
 * @src: var
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (k = 0; src[k] != '\0'; k++)
		dest[i + k] = src[k];
	dest[i + k] = '\0';
	return (dest);
}
