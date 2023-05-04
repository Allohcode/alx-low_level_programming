#include "main.h"

/**
 * binary_to_unit - hange binary to unit using usingned int
 * @b: string to be converted to binary
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int ui;
int len, base;

if (!b)
return (0);

ui = 0;

for (len = 0; b[len] != '\0'; len++)
;

for (len--, base = 1; len >= 0; len--, base *= 2)
{
if (b[len] != '0' && b[len] != '1')
{
return (0);
}
if (b[len] & 1)
{
ui += base;
}
}
return (ui);
}
