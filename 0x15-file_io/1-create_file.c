#include "main.h"
/**
 *create_file - creates a file
 *@filename: name of file to create
 *@text_content: null terminated string written to file
 *
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	ssize_t wrt;

	if (!filename)
		return (0);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
	{
		i++;
	}
	wrt = write(fd, text_content, i);
	if (wrt == -1)
		return (-1);
	close(fd);
	return (1);
}
