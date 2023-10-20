#include <stdio.h>
/**
 * main -entry point
 * Description: print comb of three digits
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int a = 48;
	int b = 49;
	int c = 50;

	while (a < 56)
	{
		while (b < 57)
		{
			while (c <= 57)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == 55 && b == 56 && c == 57)
					break;
				putchar(',');
				putchar(' ');
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');
	return (0);
}
