#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size;
	char *s;
	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	size = i + j;
	s = malloc(size * sizeof(char));
	if (s == 0)
		return ('\0');
	while
}
