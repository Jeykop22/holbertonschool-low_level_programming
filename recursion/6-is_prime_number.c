#include "main.h"

/**
 * find_prime - fonc that check if num is prime
 * @n: ...
 * @j: ...
 * Return: 1, 0, num
 */
int find_prime(int n, int j)
{
	if (j <= 1)
		return (1);
	if (n % j == 0)
		return (0);
	return (find_prime(n, j - 1));
}
/**
 * is_prime_number - fonc that calculates prime num
 * @n: ...
 * Return: 0 or prime num
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, n - 1));
}
