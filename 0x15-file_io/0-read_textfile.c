#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints
 *  it to the POSIX standard output.
 *
 *  @filename: file name
 *  @letters: the number of letters it should read and print
 *
 *  Return: the actual number of letters it could read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t	w_sz, r_sz;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	r_sz = read(fd, buffer, letters);
	if (r_sz < 0)
		return (0);
	w_sz = write(1, buffer, r_sz);
	if (w_sz == 0 || w_sz != r_sz)
		return (0);
	free(buffer);
	close(fd);
	return (w_sz);
}
