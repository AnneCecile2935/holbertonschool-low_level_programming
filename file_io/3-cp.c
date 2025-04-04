#include "main.h"
/**
 * error_check - checks for errors
 * @fdfr: integer returned from read
 * @fdto: integer returned from write
 * @av: argument element
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
 * @ac: arguments
 * @av: arguments elements
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	/* Declare variables */
	int numread, num_writ, fd_src, fd_dest, clo_src, clo_dest;
	char buffer[1024];
	/* check if arguments are correct */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open and read the file */
	fd_src = open(argv[1], O_RDONLY);
	/* open and wrtie to file_to */
	fd_dest = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	/* check for error */
	error_check(fd_src, fd_dest, argv);
	struct stat st;
    if (stat(argv[2], &st) == -1)
        chmod(argv[2], 0664);
	while ((numread = read(fd_src, buffer, 1024)) > 0)
	{
		num_writ = write(fd_dest, buffer, numread);
		/* check for error */
		if (num_writ == -1 || num_writ != numread)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				close_check(fd_src);
				close_check(fd_dest);
				exit(99);
			}
	}
	if (numread == -1)
	{
		error_check(0, -1, argv);
		close_check(fd_src);
				close_check(fd_dest);
				exit(98);
	}
	
	close_check(fd_src);
	close_check (fd_dest);
	
	return (0);
}
