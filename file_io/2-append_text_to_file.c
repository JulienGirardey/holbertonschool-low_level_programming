#include "main.h"
#include <fcntl.h>

/**
* append_text_to_file - that appends text at the end of a file
*
* @filename: name of the file
* @text_content: text to append
*
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	ssize_t bytesWritten;

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
