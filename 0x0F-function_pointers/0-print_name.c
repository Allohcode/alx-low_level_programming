#include "function_pointers.h"
#include <stdio.h>


/**
 * print_name - a function that prints name.
 * @name: varaible for name
 * @f: pointer to a function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
printf("name %s ()\n", name);

f();
}
