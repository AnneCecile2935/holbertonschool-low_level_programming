#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - function to read and print the text
 * @filename: the name of file to read
 * @letters : the number of letter to read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
   int fd;
   ssize_t bytes_written;
    char *buffer;
    ssize_t bytes_read;
    if (filename == NULL)
         return (0);
    fd = open(filename, O_RDONLY);
    if (fd == -1)
    return (0);
    buffer = malloc(sizeof(char)*(letters + 1 ));
    if (buffer == NULL)
    {
        close (fd);
        return (0);
    }
    bytes_read = read (fd, buffer, letters);
    if( bytes_read == -1)
    {
        free (buffer);
        close (fd);
        return (0);
    } 
    buffer [bytes_read] = '\0';
    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1 || bytes_written != bytes_read)
{
    free(buffer);
    close(fd);
    return (0);
}
return (bytes_written);
}