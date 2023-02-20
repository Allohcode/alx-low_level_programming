#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -E entry point
 * identifiers to loop
 * if for conditioning
 * putchar to print values
 * Return: Alwaus 0 (success)
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{

		for (num2 = 0; num2 < 10; num2++)
		{
			int rmd1 = (num1 % 10);
			int rmd2 = (num2 % 10);

			if (!rmd2)
			continue;
			putchar(rmd1 + '0');
			putchar(rmd2 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
