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
	char small = "a";
	char capital = "A";
	int i;

	for (i = "a"; i < "z"; i++)
	{
		putchar(small);
		
	}
	for (i = "A"; I < "Z"; i++)
	{
		putchar(capital);
	}
		putchar('\n');
		return (0);
}
