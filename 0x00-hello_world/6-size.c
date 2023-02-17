#include <stdio.h>
/**
 *main -E entry point
 *Return 0
 */

int main(void)
{
	printf("Size of a char: 1 %zu byte(s)\n", sizeof(char));
	printf("Size of an int: 4 %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: 4 %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: 8 %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: 4 %zu byte(s)\n", sizeof(float));
		return (0);
}
