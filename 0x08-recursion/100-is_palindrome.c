#include "main.h"
/**
 * _strlen_recursion - do
 * @s: g
 * Return: g
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome - something
 * @c: string
 * Return: string
 */
int is_palindrome(char *c)
{
	if(*c)
	{
		if (*c == *(c + _strlen_recursion(c)))
			is_palindrome(c + 1);
		return (0);
	}
		return (1);
}
