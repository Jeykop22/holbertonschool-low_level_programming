#include <stdio.h>

/**
 * main - entry point
 *
 * Description: '"5-print_numberz"'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	putchar ('\n');
	return (0);
}
