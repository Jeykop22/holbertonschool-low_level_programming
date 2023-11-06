#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string that is add to s1
 * Return: string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, i = 0, j = 0, len;
	char *s;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	len = i + j;
	s = malloc(len * sizeof(char));
	if (s == 0)
		return ('\0');
	j = 0;
	while (a < len)
	{
		if (a <= i)
			s[a] = s1[a];
		if (a >= i)
		{
			s[a] = s2[j];
			j++;
		}
		a++;
	}
	s[a] = '\0';
	return (s);
}
