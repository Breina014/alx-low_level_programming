#include "main.h"

/**
 * append_text_to_file - appends txt to file
 * @filename: filename
 * @text_content: Text to append
 *
 * Return: 1 Success, -1 Failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, x, y = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[y])
			y++;
		x = write(fd, text_content, y);
		if (x != y)
			return (-1);
	}
	close(fd);
	return (1);
}
