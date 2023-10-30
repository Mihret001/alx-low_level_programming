#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to name of file
 * @text_content: pointer to content of a file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	int l;
	int w;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (l = 0; text_content[l]; l++)
		;

	w = write(f, text_content, l);

	if (w == -1)
		return (-1);

	close(f);

	return (1);
}
