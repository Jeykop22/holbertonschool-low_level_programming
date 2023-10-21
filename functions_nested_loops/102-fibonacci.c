#include <stdio.h>

/**
 * main - entry point
 * Description: print first 50 fibonacci numbers
 *
 * Return: ALways 0 (SUCCESS)
 */
int main(void)
{
	long a = 1;
	long b = 2;
	int i = 0;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", a);
		else if (i == 1)
			printf(", %ld", b);
		else
		{
			b += a;
			a = b - a;
			printf(", %ld", b);
		}
		i++;
	}
	printf("\n");
	return (0);
}
