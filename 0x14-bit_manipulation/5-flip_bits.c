#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m);

{
int i cnt = 0;
unsigned long int crnt;
usigned long excl = n ^ m;

for (i = 63; i >= 0; 1--)
{
crnt = excl >> i;

if (crnt & 1)
cnt++;
}
return (count);
}
