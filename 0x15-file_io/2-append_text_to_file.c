#include "main.h"

/**
 * append_text_to_file - function to amend text at the end of the file
 * @filename: pointer to a file
 * @text_content: content that needs to be mended
 * Return: 1 for sucess and -1 for fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int reader, output, count;

	if (filename == NULL)
		return (-1);

	reader = open(filename, O_WRONLY | O_APPEND);

	if (reader == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	for (; text_content[count] != '\0'; count++)
		;
	output = write(reader, text_content, count);
	if (output == -1)
		return (-1);
	close(reader);
	return (1);
}
