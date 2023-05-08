#include "main.h"


/**
* append_text_to_file- append test at end of file .
* @filename: file to append to .
* @text_content: text to add to the end of given file .
* Return: 1 in success and -1 in failure .
*
*/


int append_text_to_file(const char *filename, char *text_content)
{

int pid;
int len = 0;
int written_bytes;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[len])
{
len++;
}
}

pid = open(filename, O_WRONLY | O_APPEND);
if (pid == -1)
{
return (-1);
}

written_bytes = write(pid, text_content, len);
if (written_bytes == -1)
{
close(pid);
return (-1);
}

close(pid);

return (1);


}
