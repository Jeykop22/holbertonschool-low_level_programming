#include "main.h"

/**
 * puts_half - puts over a half
 * @str: pointer string
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;

	while (str[len])
	{
		len++;
	}

	while (str[i] != '\0')
	{
		if (i >= len / 2)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
