#include <stdio.h>
#include <ctype.h>
/**
 **main -E entry point
 **char for alphabet
 **putchar to print
 **Return: Always 0 (success)
 */

int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
		putchar('\n');
		return (0);
}
