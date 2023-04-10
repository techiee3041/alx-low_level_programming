#include "main.h"

/**
 * append_text_to_file - function appending a file
 * @filename: file to be created
 * @text_content: string to write in the file
 * Return: returns -1 if the file exists
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd;
	int len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);

	if (fd < 0)
		return (-1);
	while (text_content && text_content[len])
	{
		len++;
	}

	if (write(fd, text_content, len) < 0)
	{
		close(fd);

		return (-1);
	}

	close(fd);

	return (1);

}
