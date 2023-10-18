#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print n to 98
 * @n: first operand
 *
 * Return: ...
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98\n");
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98\n");
	}
	else
		printf("%d\n", n);
}
