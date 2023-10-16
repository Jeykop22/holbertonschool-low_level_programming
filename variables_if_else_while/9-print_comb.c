#include <stdio.h>

/**
 * main - entry point
 *
 * Description: '"all combinations of single digit"'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int number = 48;
	int coma = 44;
	int space = 32;

	while (number <= 57)
	{
		putchar(number);
		if (number == 57)
		{
			break;
		}
		putchar(coma);
		putchar(space);
		number++;
	}
	putchar('\n');
	return (0);
}
