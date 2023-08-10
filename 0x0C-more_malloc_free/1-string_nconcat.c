#include "main.h"
/**
 * string_nconcat - does something
 * @s1 : var
 * @s2: var
 * @n: var
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0;
	int len2 = 0;
	int i, j;
	char *s3;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		s3 = malloc(sizeof(char) * (len1 + n +1);
	else
		s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s3)
		return (NULL);
	i = 0;
	j = 0;

	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
		s3[i++] = s2[j++];
	while (n >= len2 && i < (len1 + len2))
		s3[i++] = s2[j++];
	s3[i] = '\0';
	return (s3);
}
