#include "main.h"

/**
 * _islower - Entry point
 * Description: Checks for lowercase character.
 * @c: Contains value to be compared
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}