#include "main.h"
#include <stdio.h>
int palind(char *s, int i, int len);
int _strlen(char *s);
/**
 * is_palindrome - some
 * @s: string
 * Return: int
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (s == NULL)
		return (1);
	return (palind(s, 0, len));
}
/**
 * palind - some
 * @s: string
 * @i: count
 * @len: len
 * Return: int
 */
int palind(char *s, int i, int len)
{
	if (i >= len)
		return (1);
	if (*(s + i) != *(s + len - 1))
		return (0);
	return (palind(s, i + 1, len - 1));
}
/**
 * _strlen - len
 * @s: str
 * Return: int
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
