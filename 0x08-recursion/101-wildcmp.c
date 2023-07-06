#include "main.h"
/**
 * wildcmp - do
 * @s1: string
 * @s2: string
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 || *s2)
	{
		if(*s1 == *s2 || *s2 == '*')
			return (wildcmp(s1 + 1, s2 + 1));
		return (0);
	}
	return (1);
}
