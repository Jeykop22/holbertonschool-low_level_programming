#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of args
 * @argv: array of arguments
 * Return: Always 0 (SUCCESS) or 1 if error
 */
int main(int argc, char *argv[])
{
	int cents, coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coin++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue; /*saute l'iteration*/
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coin);
	return (0);
}
