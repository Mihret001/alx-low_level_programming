#include "main.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: pointer to name of a file
 * @text_content: pointer to content of a file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, w, l;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";
	l = 0;
	while (text_content[l] != '\0')
	{
		l++;
	}
	w = write(f, text_content, l);
	if (w == -1)
		return (-1);
	close(f);
	return (1);
}
