#include "main.h"
/**
 * factorial - something
 * @n: var
 * Return: n
 */
int factorial(char n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
