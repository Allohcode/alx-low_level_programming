#include "main.h"

/**
 * reverse_array - revers arrays
 * @a: input
 * @n input
 * Return: void
 */


void reverse_array(int *a, int n)
{
	int temp;

	for (int i = 0; i < n--; i++)
	{
	temp = a[i];
	a[i] = a[n];
	a[n] = temp;
	}
}
