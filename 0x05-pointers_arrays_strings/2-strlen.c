#include "main.h"


/**
 * _strlen - len
 * @s: no 1
 * Return: len
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
