#include <stdlib.h>
#include <stdio.h>
/**
 * main -E entry point
 * n for random number
 * if for conditioning
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	sramd(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n);
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	else
	{
		printf("Last digit of %d is %d and 0s 0\n", n, n % 10);
	}
			return (0)
}
