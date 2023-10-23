#include "main.h"

/**
 * swap_int - switch a and b
 * @a: pointer
 * @b: pointer
 * Return: ...
 */
void swap_int(int *a, int *b)
{
	int swap = 0;

	swap = *b;
	*b = *a;
	*a = swap;
}
