#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: number of args
 * @argv: array of arguments
 * Return: Always 0 (SUCCESS) or 1 if error
 */
int main(int argc, char *argv[])
{
	int i, j, res = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
