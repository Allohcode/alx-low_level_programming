#include "main.h"

/**
 * _memset - fill block of memory
 * @s: starting address of memory tobe filled
 * @b: the desired value
 * @n: number of byte to change
 *
 * Return: changed array with new value of n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

while (n > 0)
{
	s[i] = b;
	i++;
	n--;
}
return (s);
}
