#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: ...
 * Return: -1 to indicate an error, 1, factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));

}
