#include "main.h"

/**
 * _isupper - check if a letter a uppercase
 * @x: The number to be checked
 *
 * Return: 1 for upper letter or 0 for anyelse
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
