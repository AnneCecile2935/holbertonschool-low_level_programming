#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * read_textfile - function to read and print the text
 * @filename: the name of file to read
 * @letters : the number of letter to read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE* fp = fopen("Requiescat", "r");
    char buffer[1024];
    ssize_t total_read = 0;
    if (fp !=NULL)
         return (0);
    while (fgets (buffer, sizeof(buffer) -1, fp) != NULL)
            {
                printf("%s", buffer);
                total_read += strlen(buffer);
            }
    fclose(fp);
    return (total_read);
}