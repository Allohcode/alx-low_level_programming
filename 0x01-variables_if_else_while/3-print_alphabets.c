#include <stdio.h>
#include <ctype.h>
/**
 * main -E entry point
 * char for alphabets
 * int for loop
 * Return: Always 0 (success)
 */

int main(void)
{
	char small;
	char capital;
	for (small = 'a'; small <= 'z'; small++)
	{
		putchar(small);
	}
	for (capital = 'A'; capital <= 'Z'; capital++)
	{
		putchar(capital);
	}
		putchar('\n');
		return (0);
}
