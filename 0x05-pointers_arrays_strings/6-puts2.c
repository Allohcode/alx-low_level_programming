#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - print every other character of a string followed by  a new line
 * @str: pointer to the string
 * Return: Always
 */

void puts2(char *str)
{
	int length = strlen(str);
	char *end = str + length;

	while (str < end)
	{
	printf("%c", *str);
	str = str + 2;
	}
	printf("\n");
}
