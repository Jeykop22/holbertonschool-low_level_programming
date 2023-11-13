#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * main - ...
  * @argc: ...
  * @argv: ...
  *
  * Return: ...
  */
int main(int argc, char *argv[])
{
	int (*a)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = get_op_func(argv[2]);
	if (!a)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", a(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
