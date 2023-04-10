#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: the name of the file to read
* @letters: the maximum number of letters to read and print
*
* Return: the actual number of letters read and printed, or 0 on error
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, num_read, num_written, total_read = 0;
char buf[1024];
if (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
while (letters > 0 && (num_read = read(fd, buf, sizeof(buf))) > 0)
{
if (num_read > letters)
{
num_read = letters;
}
num_written = write(STDOUT_FILENO, buf, num_read);
if (num_written != num_read)
{
close(fd);
return (0);
}
letters -= num_read;
total_read += num_read;
}
close(fd);
return (total_read);
}
