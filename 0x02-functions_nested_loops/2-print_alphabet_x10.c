#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: print alphabet in lowercase, 10 times
 * Return: Void
 */

void print_alphabet_x10(void)
{
	char alph;
	int count = 0;

	while (count <= 9)
	{
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	count++;
	_putchar('\n');
	}
}
