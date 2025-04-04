#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * close_checked - if we can't close a file descriptor
 *
 * @fd: file descriptor
 *
 * Return: void
 */
void close_checked(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
* main - that copies the content of a file to another file
*
* @ac: number of argument
* @av: arguments
*
* Return: 0 on success, exits with codes 97-100 on error
*/
int main(int ac, char **av)
{
	int fd_from, fd_to;

	ssize_t r_bytes, w_bytes;
	char text_content[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | 0664);

	while ((r_bytes = read(fd_from, text_content, sizeof(text_content))) > 0)
	{
		w_bytes = write(fd_to, text_content, r_bytes);
		if (fd_to == -1 || w_bytes != r_bytes)
			close_checked(fd_from),
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]),
			exit(99);
	}

	if (r_bytes == -1)
		close_checked(fd_from),
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
		exit(98);

	close_checked(fd_from);
	close_checked(fd_to);
	return (0);
}
