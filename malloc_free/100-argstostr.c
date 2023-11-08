#include "main.h"
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	char *str;
	int i = 0, j = 0, size = ac, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			size++;
			j++;
		}
		i++;
	}
	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	while (i < ac)
	{
		while (av[i][j])
		{
			str[k++] = av[i][j];
			j++;
		}
		str[k++] = '\n';
		i++;
	}
	str[size] = '\0';
	return (str);
}
