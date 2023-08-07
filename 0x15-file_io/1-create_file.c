#include "main.h"

/**
* create_file - a function that creates a file
* prints it to the POSIX standard output.
* @filename: The name of th file to create
* @text_content: a NULL terminated string to write to the file
* Return: 1 on success, -1 on failure
* (file can not be created, file can not be written, write “fails”, etc…)
* The created file must have those permissions: rw-------.
* If the file already exists, do not change the permissions.
* if the file already exists, truncate it
* if filename is NULL return -1
* if text_content is NULL create an empty file
*/
int create_file(const char *filename, char *text_content)
{
	int i, fd, wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
