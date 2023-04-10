#include "main.h"
/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: name of the file to read
* @letters: number of letters to read and print
*
* Return: the actual number of letters it could read and print, or 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read, bytes_written;
char buffer[1024];
if (!filename)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
bytes_read = read(fd, buffer, sizeof(buffer));
if (bytes_read == -1)
{
close(fd);
return (0);
}
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
close(fd);
return (0);
}
close(fd);
return (bytes_written);
}
