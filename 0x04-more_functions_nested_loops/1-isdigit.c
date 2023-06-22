#include "main.h"

/**
 * _isdigit - is upper
 * Return: sucess or fail
 * @c: letter to check
 */


int _isdigit(int c)
{
	char C;

	C = c;
	if (C >= 48 && C <= 57)
		return (1);
	else
		return (0);
}
