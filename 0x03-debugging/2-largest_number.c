#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b,  int c)
{
        int largest;

	a = (a < 0) ? -a : a;
	b = (b < 0) ? -b : b;
	c = (c < 0) ? -c : c;
	largest = a;

	if (b >= a)
		largest = b;

	if (c >= b)
		largest = c;

	return (largest);
}
