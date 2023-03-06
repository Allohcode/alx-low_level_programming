#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is started
 * @src: memory where is copies
 * @n: number of byes
 * Return: copied memory with n byte change
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
int j = 0;

while (n > 0)
{
dest[i] = src[j];
i++;
j++;
n--;
}
return (dest);
}
