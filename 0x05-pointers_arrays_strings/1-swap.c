#include "main.h"
#include <stdio.h>

/**
 * swap_int - Take in two parameter
 * @a: input param
 * @b: intput param
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
