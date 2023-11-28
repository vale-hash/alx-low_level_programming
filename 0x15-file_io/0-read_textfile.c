#include "main.h"

/**
 * read_textfile - function to reads a text file and prints it to POSIX STDOUT
 * @filename: name of the file to be read
 * @letters : the number of letters it should read
 * Return: returns the count of words
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	size_t counter;
	size_t count;
	char *buffer;

	if (filename == NULL)
		return (0);


	buffer = malloc(sizeof(char) * letters);

	if (!filename || !letters)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == 0)
		return (0);

	if (buffer == NULL)
	{
		close(fp);
		return (0);
	}

	count = read(fp, buffer, letters);
	if (count != 0)
		return (0);

	counter = write(STDOUT_FILENO, buffer, count);

	free(buffer);

	if (count != counter)
		return (0);

	return (counter);
}
