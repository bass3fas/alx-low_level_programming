#include "main.h"


/**
 * rev_string - rev
 * @str: cha
 */

void rev_string(char *str)
{
	int c, i, l;
	char h;


	for (i = 0; str[i] != '\0'; i++)
		;
	l = i;

	for (i--, c = 0; c < l / 2; i--, c++)
	{
		h = str[c];
		str[c] = str[i];
		str[i] = h;
	}
}
