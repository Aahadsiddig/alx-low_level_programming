#include "main.h"

/**
 * read_textfile - reads text from a file and prints it
 * @filename: name of the file
 * @letters: number of bytes
 * Return: number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t byte;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	byte = read(f, &buf[0], letters);
	byte = write(STDOUT_FILENO, &buf[0], byte);
	close(f);
	return (byte);
}
