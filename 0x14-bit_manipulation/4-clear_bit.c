#include "main.h"

/**
 * clear_bit - sets the value a given bit to 0
 * @n: pointer to the number to be changed
 * @index: index of the bit to clear
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int num;

if (index > 63)
return (-1);

num = 1 << index;

if (*n & num)
	*n ^ &= num;

return (1);
}
