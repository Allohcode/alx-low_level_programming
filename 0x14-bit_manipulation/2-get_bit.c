#include "main.h"

/**
 * get_bit - return the value of a bit at an index in a decimal number
 *@n: number to be searched
 *@index: index of bit
 *Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bitV;

if (index > 63)
return (-1);

bitV = (n >> index) & 1;

return (bitV);
}
