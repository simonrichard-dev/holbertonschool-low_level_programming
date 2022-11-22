#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string
 *
 * Return: 1 on success, -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int o, i;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (o == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write(o, text_content, i);
	}
	close(o);
	return (1);
}
