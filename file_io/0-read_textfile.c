#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - function to read and print the text
 * @filename: the name of file to read
 * @letters : the number of letter to read
 * Return: number bytes write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytes_read;
ssize_t total_written = 0;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(letters);
if (buffer == NULL)
{
close(fd);
return (0);
}
bytes_read = read(fd, buffer, letters);
total_written = write(STDOUT_FILENO, buffer, bytes_read);
free(buffer);
close(fd);
return (total_written);
}
