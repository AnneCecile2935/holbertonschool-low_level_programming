#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_check(int fd_str, int fd_dest, char **argv);
void close_check(int fd);
#endif /* MAIN_H */
