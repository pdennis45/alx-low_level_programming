#include "main.h"

/**
* read_textfile - a function that reads a text file and
* prints it to the POSIX standard output.
* @filename: A text file
* @letters: the number of letters it should read and print
* Return: the actual number of letters it could read and print
* if the file can not be opened or read, return 0
* if filename is NULL return 0
* if write fails or does not write the expected amount of bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buff;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	rd = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);
	free(buff);
	close(fd);
	return (wr);
}
