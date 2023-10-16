#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: '"1-last_digit.c"'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	printf("Last digit of");
	if (lastdigit > 5)
		printf(" %d is %d and is greater than 5\n", n, lastdigit);
	if (lastdigit == 0)
		printf(" %d is 0 and is 0\n", n);
	else if (lastdigit < 6)
		printf(" %d is %d and is less than 6 and not 0\n", n, lastdigit);
	return (0);
}
