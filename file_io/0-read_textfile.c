#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
* read_textfile - that reads a text file and print it to the
* POSIX standard output
*
* @filename: name of the file
* @letters: number of letters it should read and print
*
* Return: actual number of letters it could read and print else 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	char *buffer;

	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);
	close(fd);

	if (bytesWritten != bytesRead)
		return (0);

	return (bytesWritten);
}
