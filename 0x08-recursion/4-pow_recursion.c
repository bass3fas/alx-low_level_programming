#include "main.h"
/**
 * _pow_recursion - something
 * @x: no
 * @y: pow
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 1)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
