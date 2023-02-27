#include <unistd.h>

/**
 * _putchar - wrtie character c to staoutput
 * @c: The chararcter tp print
 *
 * Return on success 1.
 * erro, -1 is returned and error is there returned.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
