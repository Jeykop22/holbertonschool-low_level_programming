#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: ... of the array
 * @height: ... of the array
 * Return: NULL or array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	if (width <= 0 || height <= 0)
		return ('\0');
	s = malloc(sizeof(int *) * height);
	if (s == 0)
		return ('\0');
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);
		if (s[i] == 0)
		{
			for (i--; i >= 0; i--)
				free(s[i]);
			free(s);
			return ('\0');
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	return (s);
}
