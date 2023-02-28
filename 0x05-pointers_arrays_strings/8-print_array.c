#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array of itegers
 * @a: integer value hold the array
 * @n: Number of elements of the array
 * Retuen: Always 0.
 */

void print_array(int *a, int n)
{
	 int index = 0;

	while (index < n)
	{
	printf("%d", a[index]);
	if (index < (n - 1))
	{
		printf(", ");
	}
	index++;
	}
	printf("\n");
}
