#include "main.h"

/**
 * _strspn - get the length of a prefix
 * @s: string
 * @accept: containes bytes that may or may not compose part of the string
 * Return: the number of byte that compse the length
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
unsigned int length;

length = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0' && accept[j] != s[j]; j++)
if (s[i] == accept[j])
	length++;
if (accept[j] == '\0')
	return (length);
}
return (lenth);
}
