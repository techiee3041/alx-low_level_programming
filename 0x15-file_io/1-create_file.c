#include "main.h"

/**
 * create_file - function creating a file
 * @filename: file to be created
 * @text_content: string to write in the file
 * Return: returns -1 if the file exists
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

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
