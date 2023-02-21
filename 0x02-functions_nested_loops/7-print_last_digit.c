#include "main.h"

/**
 * print_last_digit - Returns the value of the last digits
 * @j: The last digit of this value is what we're looking for
 * Return: Always 0 (Success)
 */

int print_last_digit(int j)
{
	int last;
	int nlast = (j % 10);

	if (j < 0)
	{
		last = (-1 * nlast);
		_putchar (last + '0');
		return (last);
	}

	else
	{
		last = (nlast);
		_putchar (last + '0');
		return (last);
	}
}
