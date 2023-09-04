#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: number of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	bytes = read(fp, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fp);
	return (bytes);
}
