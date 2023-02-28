#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copy the string pointer by src
 * @src: source
 * @dest: destination
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while (*src)
		*dest++ = *src++;
	return (d);
}
