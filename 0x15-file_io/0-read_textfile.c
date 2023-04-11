#include "main.h"

/**
 * read_textfile - prints text from a file
 *
 * @filename: name of the file
 * @letters: number of characters to read
 *
 * Return: actual number of letters read, 0 if end of file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reader, output, fd;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	reader = read(fd, buff, letters);

	if (reader == -1)
	{
		free(buff);
		return (0);
	}

	output = write(STDOUT_FILENO, buff, reader);

	if (output == -1 || output != reader)
	{
		free(buff);
		return (0);
	}

	close(fd);
	free(buff);
	return (output);
}
