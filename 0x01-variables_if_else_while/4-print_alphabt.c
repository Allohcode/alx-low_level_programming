#include <stdio.h>
#include <ctype.c>
/**
 *main entry point
 *char for alphabets
 *loop
 *condition
 *Return: Always 0 (success)
 */

int main(void)
{
	char small, e, q;

	e = 'e';
	q = 'q';

	for (small = 'a'; small <= 'z'; small++)
	{
	if (small != e && small != q)
	{
	putchar(small);
	}
	}
		putchar('\n');
		return (0);
}
