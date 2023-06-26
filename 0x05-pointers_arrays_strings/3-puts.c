#include "main.h"


/**
 * _puts - swap
 * @str: n
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
		_putchar(str[0]);
	_putchar('\n');
}
