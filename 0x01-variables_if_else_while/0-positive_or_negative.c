#include <stdio.h>
#include <time.h>
/**
 * main -E entery point
 * n equall to random number
 * conditional statment If
 * Return: Always 0 (success)
 *
 */

int main(viod)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is nagative\n", n);
		return (0);
}
