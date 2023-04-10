#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: name of the file to be read
* @letters: maximum number of characters to be read and printed
*
* Return: actual number of letters it could read and print
*         0 if the file can not be opened or read, or if write fails or
*         does not write the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, bytes_read;
ssize_t total_bytes_read = 0;
char buf[1024];
if (!filename)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
while ((bytes_read = read(fd, buf, 1024)) > 0 && letters > 0)
{
if (write(STDOUT_FILENO, buf, bytes_read) != bytes_read)
{
close(fd);
return (0);
}
total_bytes_read += bytes_read;
letters -= bytes_read;
}
close(fd);
if (bytes_read < 0)
{
return (0);
}
return (total_bytes_read);
}
