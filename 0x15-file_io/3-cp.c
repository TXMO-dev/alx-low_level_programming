#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 1024
void close_files(int fd_from, int fd_to);
void print_error(int err_code, const char *msg, const char *filename, int fd_from, int fd_to);
/**
* main - Copies the content of one file to another.
* @argc: The number of command-line arguments.
* @argv: An array of pointers to the arguments.
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, read_size;
char buf[BUF_SIZE];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
return (97);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
print_error(98, "Error: Can't read from file", argv[1], -1, -1);
}
fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
{
print_error(99, "Error: Can't write to", argv[2], fd_from, -1);
}
while ((read_size = read(fd_from, buf, BUF_SIZE)) > 0)
{
if (write(fd_to, buf, read_size) != read_size)
{
print_error(99, "Error: Can't write to", argv[2], fd_from, fd_to);
}
}
if (read_size == -1)
{
print_error(98, "Error: Can't read from file", argv[1], fd_from, fd_to);
}
close_files(fd_from, fd_to);
return (0);
}
/**
* close_files - Closes two file descriptors.
* @fd_from: The file descriptor of the file being read from.
* @fd_to: The file descriptor of the file being written to.
*/
void close_files(int fd_from, int fd_to)
{
int close_from, close_to;
close_from = close(fd_from);
close_to = close(fd_to);
if (close_from == -1)
{
print_error(100, "Error: Can't close fd", NULL, fd_from, fd_to);
}
if (close_to == -1)
{
print_error(100, "Error: Can't close fd", NULL, fd_from, fd_to);
}
}
/**
* print_error - Prints an error message to standard error.
* @err_code: The exit code to return.
* @msg: The error message.
* @filename: The name of the file causing the error.
* @fd_from: The file descriptor of the file being read from.
* @fd_to: The file descriptor of the file being written to.
*/
void print_error(int err_code, const char *msg, const char *filename, int fd_from, int fd_to)
{
dprintf(STDERR_FILENO, "%s %s", msg, filename ? filename : "");
dprintf(STDERR_FILENO, "%s", filename ? "\n" : "");
close_files(fd_from, fd_to);
exit(err_code);
}
