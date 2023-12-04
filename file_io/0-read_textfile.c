#include "main.h"
#include <unistd.h>

/**
  * read_textfile - ...
  * @filename: The source file
  * @letters: Number of letters to reads and prints
  *
  * Return: ...
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r;
	char *size = malloc(sizeof(char *) * letters);

	if (!size)
		return (0);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);
	r = read(fd, size, letters);
	write(STDOUT_FILENO, size, r);
	free(size);
	close(fd);
	return (r);
}
