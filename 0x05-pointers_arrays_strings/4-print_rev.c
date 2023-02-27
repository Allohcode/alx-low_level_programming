#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - print string in revers
 * @s: string input
 * Return: Always 0 (success_
 */

void print_rev(char *s)
{
	int length = strlen(s);
	char *rev = s + length - 1;


	while (rev >= s)
	{
		printf("%c", *rev);
		rev--;
	}
	printf("\n");
}
