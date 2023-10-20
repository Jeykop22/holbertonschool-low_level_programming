#include <stdio.h>
/**
 * main -entry point
 * Description: print comb of two digits
 * Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int a = 48;
	int b = 49;

	while (a < 57)
	{
		while (b <= 57)
		{

			putchar(a);
			putchar(b);
			if (b <= 57 && a < 56)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');
	return (0);
}
