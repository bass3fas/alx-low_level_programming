#include "main.h"
/**
 * str_concat - does something
 * @s1 : var
 * @s2: var
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int j = 0;
	char *s3;

	while (s1[len1] != '\0' && s1)
		len1++;
	while (s2[len2] != '\0' && s2)
		len2++;
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);
	while (i < len1 && s1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (j < len2 && s2)
	{
		s3[i] = s2[j];
		j++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
