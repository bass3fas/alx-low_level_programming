#include <stdio.h>

/**
  * print_sign - detects number sign
  * @n: the letter to be tested
  * Return: 1 if true, 0 if false
  */


void positive_or_negative(int n)
	{
		if (n > 0)
			printf("%d is positive\n", n);

		else if (n < 0)
			printf("%d is negative\n", n);

		else
			printf("%d is zero\n", n);
	}
