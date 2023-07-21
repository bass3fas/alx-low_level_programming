#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - do
 * @name: var
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name|| !f)
		return;
	f(name);
}
