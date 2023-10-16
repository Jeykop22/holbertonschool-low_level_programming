#include <stdio.h>

/**
 * main - entry point
 *
 * Description: '" 2-print_alphabet in lower"'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha = 'a';
	char upper = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar ('\n');
	return (0);
}
