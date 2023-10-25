#include "main.h"

/**
 * cap_string - put a Capitalize
 * @str: string pointer
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0, j = 13, a;
	char array[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, '(', ')', '{', '}'};

	while (str[i])
	{
		a = 0;
		while (a < j)
		{
			if ((i == 0 || str[i - 1] == array[a]) && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			a++;
		}
		i++;
	}
	return (str);
}
