0;10;1c0;10;1c#include "main.h"
int count(char *s);
/**
 * strtow - does something
 * @str: string
 * Return: char
 */
char **strtow(char *str)
{
	char **arr, *tmp;
	int len = 0, k = 0, w, c = 0, s, e, i;

	while (*(str + len))
		len++;
	w = count(str);
	if (w == 0)
		return (NULL);
	arr = (char **) malloc(sizeof(char *) * (w + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if ((str[i] == ' ' || str[i] == '\0') && c != 0)
		{
			e = i;
			tmp = (char *) malloc(sizeof(char) * (c + 1));
			if (tmp == NULL)
				return (NULL);
			while (s < e)
				*tmp++ = str[s++];
			*tmp = '\0';
			arr[k] = tmp - c;
			k++;
			c = 0;
		}
		else if (c++ == 0)
			s = i;
	}
	arr[k] = NULL;
	return (arr);
}
/**
 * count - count
 * @s: str
 * Return: int
 */
int count(char *s)
{
	int f, c, w;

	f = 0;
	w = 0;
	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}
	return (w);
}
