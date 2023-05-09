#include "main.h"

/**
 * read_textfile - read a text and print it letters
 * @filename: filename.
 * @letters: number of letters printed
 *
 * Return: a nummber of letters printe. it fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nrd, nwr;

char *buf;

if (!filename)
	return (0);

fb = open(filename, O_RDONLY);

if (fb == -1)
	return (0);

buf = malloc(sizeof(char) * (letters));

if (!buf)
	return (0);

nrd = read(fb, buf, letters);
nwr = write(STDOUT_FILENO, buf, nrd);

close(fb);

free(buf);

return (nwr);
}
