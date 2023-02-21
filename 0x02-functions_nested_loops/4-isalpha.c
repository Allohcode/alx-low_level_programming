#include "main.h"

/**
 * _isalpha - Return 1 if @c is a letter, lowercase or uppercase
 * Description: Checks for alphabetic characters
 * @c: Contains value to be compared
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}