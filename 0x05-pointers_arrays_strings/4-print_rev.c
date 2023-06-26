#include "main.h"


/**
 * print_rev - rev
 * @str: cha
 */

void print_rev(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
		;
	for (c--; c >= 0; c--)
		_putchar(str[c]);

	_putchar('\n');
}
