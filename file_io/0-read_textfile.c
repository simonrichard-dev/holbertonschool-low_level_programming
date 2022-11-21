#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX
 * @filename: pointer to filename
 * @letters: number of letters
 *
 * Return: actual number of letter
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t of;
	ssize_t rf;
	ssize_t	wf;
	char *tmp;

	tmp = malloc(sizeof(char) * letters);

	if (tmp == 0)
	{
		free(tmp);
		return (0);
	}

	of = open(filename, O_RDONLY);
	rf = read(of, tmp, letters);
	wf = write(STDOUT_FILENO, tmp, rf);

	if (of == -1 || rf == -1 || wf != rf)
	{
		free(tmp);
		return (0);
	}

	close(of);
	return (wf);
}
