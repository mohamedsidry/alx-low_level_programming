#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/** SYMBOLIC CONSTANTS **/

#define BUFFERSIZE 1024 /** NUMBER OF BYTES IN BUFFER */
#define P_RW_USR 0600 /** READ AND WRITE FOR GROUP */
#define P_RW_GRP 0060 /** READ AND WRITE FOR GROUP */
#define P_R__OTH 0004 /** READ ONLY FOR OTHERS */



/**
* main - copy file content from file to other .
* @argc: the number of cmd line args .
* @argv: pointer to array of cmd arguments .
* Return: return 0 code is good ! .
*/

int main(int argc, char *argv[])
{
char *buffer;
int input_file, output_file, bytes, written;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
return (97);
}

buffer = create_buffer(argv[2]);

input_file = open(argv[1], O_RDONLY);

bytes = read(input_file, buffer, BUFFERSIZE);

}
}
