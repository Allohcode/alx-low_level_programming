#include "main.h"


/**
 * _strcat - concat two strings
 * @dest: first string input
 * @src: second string input
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;


	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
