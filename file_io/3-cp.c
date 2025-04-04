	#include "main.h"
	#include <sys/stat.h>
/**
 * error_check - checks for errors
 * @fd_src: integer returned from read
 * @fd_dest: integer returned from write
 * @argv: argument element
 */
	void error_check(int fd_src, int fd_dest, char **argv)
	{
		/* check if the file was read */
		if (fd_src == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		/* check if file was written */
		if (fd_dest == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
/**
 * close_check - function to close if error 100
 * @fd : parameter
 * Return : nothing
 */
	void close_check(int fd)
	{
	if (close(fd) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
	}
	}
/**
 * main - Entry point
 * @argc: arguments
 * @argv: arguments elements
 * Return: Always 0.
 */
	int main(int argc, char **argv)
	{
		int numread = 1024, num_writ, fd_src, fd_dest;
		char buffer[1024];
		struct stat st;
	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
		fd_src = open(argv[1], O_RDONLY);
		fd_dest = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
		error_check(fd_src, fd_dest, argv);
	if (stat(argv[2], &st) == -1)
	chmod(argv[2], 0664);
		while ((numread = read(fd_src, buffer, 1024)) > 0)
		{
			num_writ = write(fd_dest, buffer, numread);
				if (num_writ == -1 || num_writ != numread)
				{
					dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
					close_check(fd_src);
					close_check(fd_dest);
					exit(100);
				}
		}
		if (numread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close_check(fd_src);
					close_check(fd_dest);
					exit(100);
		close_check(fd_src);
		close_check(fd_dest);
		}
		return (0);
		}
