#include "main.h"
/**
 *append_text_to_file - appends text at the end of a file
 *@filename: name of file
 *@text_content: null terminated string at the end of file
 *
 *Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wrt;
	int i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
		wrt = write(fd, text_content, i);
		if (wrt == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
