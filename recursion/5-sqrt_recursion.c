#include "main.h"

/**
 * find_num - fonct that calculates sqrt
 * @i: number n
 * @j: square root of i
 * Return: find_num, j, -1
 */
int find_num(int i, int j)
{
	if (j * j == i)
		return (j);/*j is the perfect sqrt*/
	else if (j * j > i)
		return (-1);/*i does not have perfect sqrt*/
	return (find_num(i, j + 1));/*j++ while we don't have sqrt*/
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number
 * Return: find_sqrt(n, 0)
 */
int _sqrt_recursion(int n)
{
	return (find_num(n, 0));
}

