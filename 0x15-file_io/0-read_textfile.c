#include "main.h"
#include <stdlib.h>
/**
  *read_textfile- reads a text file and prunts in tk the standard output
  *@filename: text file to read
  *@letters: total number of letters
  *Return: number of bytes read and printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fil;
	ssize_t wbytes;
	ssize_t rbytes;

	fil = open(filename, O_RDONLY);
	if (fil == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);
	rbytes = read(fil, buffer, letters);
	wbytes = write(STDOUT_FILENO, buffer, rbytes);
	free(buffer);
	close(fil);
	return (wbytes);
}

