#include "main.h"

/**
  * print_sign - detects number sign
  * @n: the letter to be tested
  * Return: 1 if true, 0 if false
  */


int print_sign(int n)
	{
		if (n > 0)
		{
			_putchar(43);
			return (1);
		}

		else if (n < 0)
		{
			_putchar(45);
			return (-1);
		}

		else
		{
			_putchar(48);
			return (0);
		}
	}
