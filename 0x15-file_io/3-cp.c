#include "main.h"
#include <stdio.h>

char *create_buff(char *filename);
void close_file(int filedesc);

/**
 * create_buff - this function allocates 1024 bytes to the buffer
 * @filename: the file for the buffer
 * Return: Pointer to char for the buffer
 */
char *create_buff(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (!buff)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - this function closes the file descriptor
 * @filedesc: the file descriptor
 * Return: Void
 */
void close_file(int filedesc)
{
	int fd;

	fd = close(filedesc);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedesc);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: - size of the arguments
 * @argv: - array of pointers to the arguments
 * Return: 0 for success, otherwise fail
 */
int main(int argc, char *argv[])
{
	int rd, wr, from, to;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		wr = write(to, buf, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		rd = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buf);
	close_file(from);
	close_file(to);
	return (0);
}
