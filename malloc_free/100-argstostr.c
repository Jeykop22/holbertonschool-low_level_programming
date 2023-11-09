#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string;
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 * Return: (NULL if empty or fail) or success
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int a, b, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			size++;
	}
	s = malloc(sizeof(char) * size + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			s[i++] = av[a][b];
		s[i++] = '\n';
	}
	s[size] = '\0';
	return (s);
}
