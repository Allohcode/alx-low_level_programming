#include "main.h"
#include "holberton.h"

/**
 * print_times_table - prints the times table
 * @n: integer for which the times table will be printed
 * Return: Always 0 (Success)
 */

void print_times_table(int n)
{
	int num, mult, prod;

if (n >= 0 && n <= 15)
{

for (num = 0; num <= n; num++)
{
_putchar('0');
for (mult = 1; mult <= n; mult)
{

prod = num * mult;

if (prod <= 99)
	_putchar(' ');
if (prod <= 9)
	_putchar(' ');
if (prod >= 100)
{
	_putchar((prod / 100) + '0');
	_putchar(((prod / 10)) % 10 + '0');
}
else if (prod <= 99 && prod >= 10)
{
	_putchar((prod % 10) + '0');
}
_puchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}
