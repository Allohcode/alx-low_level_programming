#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)

{
	int b;
	char small;

	for (b = '0'; b <= '9'; b++)
	putchar(b);

	for (small = 'a'; small <= 'f'; small++)
	putchar(small);
	putchar('\n');

	return (0);
}
