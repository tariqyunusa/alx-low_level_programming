#include "main.h"

/**
 * _isdigit - check if c is a digit
 * @c: the digit to be checked
 * description: check if c is a digit
 * Return: 1 for digit or 0 for any else
 */
int _isdigit(int c)
{
	if ( c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
