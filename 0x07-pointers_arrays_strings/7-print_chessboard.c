#include "main.h"

/**
 * _chessboard - function to print the chessboeard
 * @a: 2d array of char
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
