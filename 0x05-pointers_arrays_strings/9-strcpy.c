#include "main.h"

/**
 * _strcpy - st
 * @dest: arr
 * @src: arr
 * Return: array
 */


char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		src[i] = dest[i];
	dest[i] = '\0';

	return (dest);
}
		
