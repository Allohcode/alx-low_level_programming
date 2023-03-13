#include "main.h"
#include <stdlib>

/**
 * create_array: write a func that creats array of char
 * @size: sixe of array
 * @c: char to assign
 * Discription: creat array od size size and assign char c
 *
 * Return: pointer to array, Null i fail
 **/

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

str = malloc(sizeof(char) * size);

if (size == 0 || str == NULL)
	return (NULL);

for (i = 0; i < size; i++)
	str[i] = c;
return (str);
}
