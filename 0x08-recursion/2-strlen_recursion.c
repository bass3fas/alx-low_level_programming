#include "main.h"
/**
 * _strlen_recursion - something
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	else
	return (i);
}
