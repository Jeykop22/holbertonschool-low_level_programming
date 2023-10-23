#include "main.h"
#include <stdio.h>

/**
 * print_array - print array
 * @a: pointer
 * @b: second operand
 */
void print_array(int *a, int b)
{
	int i = 0;

	while (i < b)
	{
		if (i != b - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");
}
