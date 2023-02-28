#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints the second partof the string followed bay a new line
 * @str: Pointer to string
 * Return: Always 0 (success)
 */

void puts_half(char *str)
{
	int len = strlen(str);
	char *end = str + len;

	if (len % 2 == 0)
	{
		char *div = str + len / 2;

		while (div < end)
		{
		printf("%c", *div);
		div++;
		}
	}
	else
	{
		char *div = str + (len + 1) / 2;

		while (div < end)
		{
		printf("%c", *div);
		div++;
		}

		printf("\n");

	}
}
