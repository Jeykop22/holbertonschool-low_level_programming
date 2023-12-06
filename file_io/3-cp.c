#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: numbers of arguments
 * @argv: arguments
 * Return: int
*/
int main(int argc, char **argv)
{
	int from_fd, to_fd, readed, writed;
	char *size[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from_fd = open(argv[1], O_RDONLY);
	if (!argv[1] || from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((readed = read(from_fd, size, 1024)) > 0)
	{
		writed = write(to_fd, size, readed);
		if (writed != readed || writed == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(from_fd);
			close(to_fd);
			exit(99);
		}
	}
	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		close(from_fd);
		close(to_fd);
		exit(98);
	}
	if (close(from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}
	if (close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}
	return (0);
}
