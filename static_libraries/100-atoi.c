#include "main.h"

/**
 * _atoi - fonction  that convert a string to an integer.
 * @s: string
 * Return: ni
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int ni = 0;
	int min = 1;
	int a = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			a = 1;
			ni = (ni * 10) + (s[i] - '0');
			i++;
		}
		if (a == 1)
		{
			break;
		}
		i++;
	}
	ni *= min;
	return (ni);
}
