#ifndef MAIN_H
#define MAIN_H



/** STANDARD LIBRARIES **/

#include <unistd.h> /** open read **/
#include <stdlib.h> /**malloc and free **/
#include <fcntl.h> /** open && symbolic constant **/

/** FUNCTIONS PROTOTYPES **/

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);



#endif /** MAIN_H **/
