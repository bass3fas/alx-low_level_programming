#include <stlib.h>
#include "main.h"
int countw(char *s);
/**
 * strtow - something
 * @str: string
 * Return: char
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = countw(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char) * (c + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str == ' ' || str == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
			else if (c++ == 0)
				start = i;
	}
		matrix[k] = NULL;
		return (matrix);
}
/**
 * countw - count
 * @s: string
 * Return: w
 */
int countw(char *s)
{
	int c, flag = 0, w = 0;

	for (c =0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;

		}
	}
	return (w);
}