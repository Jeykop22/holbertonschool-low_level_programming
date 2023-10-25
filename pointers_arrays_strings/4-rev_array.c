#include "main.h"

/**
 * reverse_array - print an array in rev
 * @a: pointer
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int swap = n - 1;

	while (start < swap)
	{
		int temp = a[start];

		a[start] = a[swap];
		a[swap] = temp;
		start++;
		swap--;
	}
}
