#include "main.h"
#include <fcntl.h>

/**
* create_file - that creates a file
*
* @filename: name of the new file
* @text_content: content of the new file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	while (text_content[i])
		i++;

	bytesWritten = write(fd, text_content, i);

	if (bytesWritten == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
