#include <stdio.h>
/**
 * main -entry point
 * Description: print comb of two digits
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 56; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			for (c = b + 1; c <= 57 ; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == 55 && b == 56 && c == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
