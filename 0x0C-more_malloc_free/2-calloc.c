#include <stdlib.h>
#include "main.h"
char *_memset(char *s, char b, unsigned int n);
/**
 * _calloc - something
 * @nmemb: var
 * @size: var
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
/**
 * _memset - something
 * @s: str
 * @b: chr
 * @n: var
 * Return: ptr
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
