#include "main.h"


#define PERMESSION 0600


/**
* create_file- creates a file and fill it with text .
* @filename: name of file to be created .
* @text_content: text to put in the file .
* Return: 1 on success and -1 on failure .
*/



int create_file(const char *filename, char *text_content)
{
int len = 0;
int pid;
int written;

if (filename == NULL)
return (-1);

while (text_content[len])
{
len++;
}

pid = open(filename, O_CREAT | O_RDWR | O_TRUNC, PERMESSION);
if (pid == -1)
{
return (-1);
}
else
{
written = write(pid, text_content, len);
}
if (written == -1)
{
close(pid);
return (-1);
}
close(pid);
return (1);
}
