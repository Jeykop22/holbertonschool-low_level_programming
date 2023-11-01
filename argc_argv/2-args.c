#include <stdio.h>

/**
 * main - entry point
 * @argc: number of args
 * @argv: array of arguments
 * Return: Always 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
