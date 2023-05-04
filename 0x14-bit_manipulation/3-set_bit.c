#include "main.h"

/**
 * set_bit - set bit at a given index to 1
 * @n: pointer to number to be changed
 * @index: index of the bit to set to 1
 * Return: 1 from success, -1 from error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *N);

return (1);
}
