#include "main.h"
#include <stddef.h>

/**
 *
 * _strpbrk - search a string for any of set byte
 * @s: the string
 * @accept: set bytes
 * Return: a pointer to the byte int s that matches oe of thebyte in accept
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i;
unsigned int j;

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != '\0'; j++)
	{

	if (s[i] == accept[j])
		return (&s[i]);
	}

}
return (NULL);
}
