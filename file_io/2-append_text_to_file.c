#include "main.h"

/**
 * append_text_to_file - append text to a file
 * @filename: pointer to filename with text_content
 * @text_content: pointer to text_content NULL terminated string
 *
 * Return: 1 when success or -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, i, w;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		   w = write(o, text_content, i);
	}
	if (w == -1 || o == -1)
		return (-1);
	close(o);
	return (1);
}
