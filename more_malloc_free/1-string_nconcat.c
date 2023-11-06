#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - function that concatenates two strings.
 *@s1: destination of concat
 *@s2: to move in s1
 *@n: size of s2
 *Return: string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, a = 0, len;
	char *s;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n > j)
		n = j;
	len = i + n;
	s = malloc((len * sizeof(char)) + 1);
	if (s == 0)
		return ('\0');
	j = 0;
	while (a < len)
	{
		if (a <= i)
			s[a] = s1[a];
		if (a >= i)
		{
			s[a] = s2[a - i];
		}
		a++;
	}
	s[a] = '\0';
	return (s);
}
