#include "main.h"

/**
 * binary_to_unit - hange binary to unit using usingned int
 * @b: string to be converted to binary
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int cnv = 0;

if (!b)
return (0);

for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
cvn = 2 * cvn + (b[i] - '0');
}

return (cnv);
}
