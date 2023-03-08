#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: input number
 * Return: square root of n or -1
 */

int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
if (n <= 1)
	return (n);
return (_sqrt_recursion(n));
}
