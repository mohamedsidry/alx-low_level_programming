#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/** SYMBOLIC CONSTANTS **/

#define BUFFERSIZE 1024 /** NUMBER OF BYTES IN BUFFER */
#define P_RW_RW_R 0664 /** FILE PERMISSIONS **/

/** FUNCTION PROTOTYPE **/

void close_file(ssize_t file);

/**
* main - copy file content from file to other .
* @argc: the number of cmd line args .
* @argv: pointer to array of cmd arguments .
* Return: return 0 code is good ! .
*/

int main(int argc, char *argv[])
{

ssize_t fd_input, fd_output;
int bytes, written;
char *buffer;


if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

fd_input = open(argv[1], O_RDONLY);

if (fd_input == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

buffer = malloc(sizeof(char) * BUFFERSIZE);

if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't allocate in memory !\n");
}

fd_output = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, P_RW_RW_R);

if (fd_output == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}

do {
bytes = read(fd_input, buffer, BUFFERSIZE);
if (bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
written = write(fd_output, buffer, bytes);
if (written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
} while (bytes != 0);

close_file(fd_input);
close_file(fd_output);

free(buffer);

return (0);
}

/**
* close_file - function that closes openfile.
* @file: file descriptor.
*
*/

void close_file(ssize_t file)
{
ssize_t retu;

retu = close(file);
if (retu != 0)
{
dprintf(STDOUT_FILENO, "Error: Can't close fd %lu\n", file);
exit(100);
}

}
