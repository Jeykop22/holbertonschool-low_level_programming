#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of args
 * @argv: array of arguments
 * Return: Always 0 (SUCCESS) or 1 if error
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (0);
}
