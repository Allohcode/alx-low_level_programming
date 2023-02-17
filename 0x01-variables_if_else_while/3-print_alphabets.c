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
	char smalp[26] = "abcdefghijklmnopqrstuvwxyz";
	char upalp[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(smalp[i]);
		putchar(upalp[i]);
	}
		putchar('\n');
		return (0);
}
