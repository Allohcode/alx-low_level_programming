#include "main.h"

/**
 * reverse_array - revers arrays
 * @a: input
 * @n: input
 * Return: void
 */


void reverse_array(int *a, int n)
{
	int bb[] = { 0 };
	int i, j, k, *b = bb;

	i = 0;

	while (i < n)
	{
	bb[i] = a[i];

	_putchar(bb[i] + '0');

	b++;
	i++;
	}
	k = 0;
	j = n - 1;

	while (j >= 0)
	{
	a[k] = *b;
	j--;
	b--;
	}
}
