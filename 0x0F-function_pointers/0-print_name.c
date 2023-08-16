#include "function_pointers.h"
/**
 * print_name - something
 * @name: str
 * @f: func
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
