#include <unistd.h>

/**
 * _Putchar - write the character c to stdout
 * @c: The character tp br printed
 * Return: on success 1.
 * On error, -1 is returned, and error is set appropriately.
 */


int _putchar(char c)
{
return (write(1, &c, 1));

}
