#include "main.h"

/**
 * leet - change a e o t l in encode with 1337
 * @str: pointer string
 * Return: str
 */
char *leet(char *str)
{
	int i = 0, a;
	int l = 5;
	char tab1[5] = {'A', 'E', 'O', 'T', 'L'};
	char tab2[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		a = 0;
		while (a < l)
		{
			if (str[i] == tab1[a] || str[i] - 32 == tab1[a])
				str[i] = tab2[a];
			a++;
		}
		i++;
	}
	return (str);
}
