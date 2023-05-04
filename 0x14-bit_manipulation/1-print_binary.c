#include "main.h"

/**
 * print_binary - to print binary equivalent of a decima;l number
 * @n: number to be printed in baniry
 */

void print_binary(unsigned long int n)
{
int i, cnt = 0;
unsigned long int curnt;

for (i = 63; i >= 0; i--)
{
curnt = n >> i;

if (curnt & 1)
{
_putchar('1');
cnt++;
}
else if (cnt)
	_putchar('0');
}

if (!cnt)
	_putchar('0')
}
