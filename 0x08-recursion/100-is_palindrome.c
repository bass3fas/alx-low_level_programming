#include "main.h"
/**
 * _strlen - do
 * @s: g
 * Return: g
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * is_palindrome_rec - does something
 * @s: string
 * @start: var
 * @end: var
 * Return: int
 */
int is_palindrome_rec(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return(is_palindrome_rec(s, start + 1, end - 1));
}
/**
 * is_palindrome - something
 * @c: string
 * Return: string
 */
int is_palindrome(char *c)
{
	int len = _strlen(c);
	return (is_palindrome_rec(c, 0, len - 1));
}
