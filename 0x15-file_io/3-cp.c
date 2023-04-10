#include "main.h"


int close_error(int fd);
void read_error(char *filename);
void write_error(char *filename);

/**
 * main - copies a file comtent to another
 * @argc: counter argument
 * @argv: vector argument
 * Return: always return 0, else exit
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int fd_file_from, fd_file_to;
	ssize_t bytes_counted = 1;



	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}



	fd_file_from = open(argv[1], O_RDONLY);
	if (fd_file_from < 0)
	{
		read_error(argv[1]);
		exit(98);
	}

	fd_file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_file_to < 0)
	{
		write_error(argv[2]);
		close_error(fd_file_from);
		exit(99);
	}


	while (bytes_counted)
	{
		bytes_counted = read(fd_file_from, buffer, 1024);
		if (bytes_counted < 0)
		{
			read_error(argv[1]);
			close_error(fd_file_from);
			close_error(fd_file_to);
			exit(98);
		}
		if (bytes_counted == 0)
			break;
		bytes_counted = write(fd_file_to, buffer, bytes_counted);
		if (bytes_counted < 0)
		{
			write_error(argv[2]);
			close_error(fd_file_from);
			close_error(fd_file_to);
			exit(99);
		}
	}

	if (close_error(fd_file_from) < 0)
	{
		close_error(fd_file_to);
		exit(100);
	}
	if (close_error(fd_file_to) < 0)
		exit(100);
	return (0);
}

/**
 * close_error - close a file descriptor and check for a possible error.
 * @fd: file descriptor for file to be closed.
 * Return: 1 if fd colud be closeed, -1 if fd could not be closed.
 */

int close_error(int fd)
{
	int close_output;

	close_output = close(fd);
	if (close_output < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (close_output);
}

/**
 * read_error - prints the read error.
 * @filename: filename.
 */

void read_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
}


/**
 * write_error - prints the write error.
 * @filename: filename.
 */


void write_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
}
