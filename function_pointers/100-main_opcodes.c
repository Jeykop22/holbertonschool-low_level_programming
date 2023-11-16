#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: ...
 * @argv: ...
 * Return: ...
 */
int main(int argc, char **argv)
{
	char *opc = (char *) main;
	int i, args;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	args = atoi(argv[1]);
	if (args < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < args; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != args - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
