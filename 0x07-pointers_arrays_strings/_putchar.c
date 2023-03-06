#include <unistd.h>

/**
 * _putchar - write the charater c  to stdout
 * @c: The caracter to print
 *
 * Return: on success 1.
 *
 * On error, -1 is retuned, and eror is set appropriately
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
