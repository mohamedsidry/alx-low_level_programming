#include "main.h"



/**
* read_textfile- reads from given file spesfic number of chars .
* @filename: pointer to chars (file to read from) .
* @letters: number of chars to read from that file .
* Return: number of printed chars if success .
* 0 if the file name is NULL.
*
*/


ssize_t read_textfile(const char *filename, size_t letters)
{

int pid;
char *buffer;
size_t bytes;
size_t printed_bytes;

pid = open(filename, O_RDONLY);

if (pid == -1)
return (0);

buffer = malloc(sizeof(char) * letters);

bytes = read(pid, buffer, letters);

printed_bytes = write(STDOUT_FILENO, buffer, bytes);


free(buffer);

close(pid);

return (printed_bytes);


}
