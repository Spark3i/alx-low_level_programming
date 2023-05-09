#include "main.h"
#include <string.h>
/**
  *append_text_to_file- appends text to a file
  *@filename: pointer to filenane to beu created
  *@text_content: content of the file
  *Return:1 when succesful otherwise -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		if (write(fd, text_content, len) != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
