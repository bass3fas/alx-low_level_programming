#include "main.h"
/**
 * _rev - something
 * @c: string
 * Return: string
 */
int wildcmp(char *s1, char *s2)
{
	if ((*s1 != *s2 && *s2 != '*') || (*s1 == '\0') || (*s2 == '\0'))
		return (0);
	return(wildcmp(s1 + 1, s2 + 1));
}
