#include "main.h"
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
