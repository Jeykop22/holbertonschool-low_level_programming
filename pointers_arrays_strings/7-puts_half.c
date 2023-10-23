#include "main.h"

/**
 * puts_half - puts over a half
 * @str: pointer string
 */
void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len])
	{
		len++;
	}
	if (len % 2 == 0)
		i = len / 2;
	else
	{
		i = (len + 1) / 2;
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
