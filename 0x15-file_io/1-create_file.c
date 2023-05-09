#include "main.h"

/**
 * create_file - creat a file
 * @filename: filename
 * @text_content: content writen in the file
 *
 * Reeturn: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
int fb;
int nletters;
int rwr;

if (!filename)
	return (-1);

fb = open(filename,  O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (fb == -1)
	return (-1);

if (!text_content)
	text_content = "";

for (nletters = 0; text_content[nletters]; nletters++)
	;

rwr = write(fb, text_content, nletters);


if (rwr == -1)
	return (-1);

close(fb);

return (-1);
}
