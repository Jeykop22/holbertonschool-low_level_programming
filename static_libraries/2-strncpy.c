#include "main.h"

/**
 * _strncpy - copy a string between a lenght
 * @dest: destination of copy
 * @src: source of copy
 * @n: lenght of copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	while (n > 0)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}
