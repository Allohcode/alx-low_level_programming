#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to be printed
 * Return : 0 Always (success)
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
	x = -n;
	_putchar ('-');
	}
	else
	{
	x = n;
	}

	if (x / 10)
	{
	print_number(x /10);I
	}
	_putchar((x % 10) + '0');
}
