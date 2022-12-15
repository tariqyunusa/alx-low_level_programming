#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print the numbers from 0 to 9
 *
 * Description: printsnumbers except 2 and 4
 * Return: The numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 10; c++)
	{
		if ((c == 2)  || (c == 4))
		{
			continue;
		}
	
		putchar(c + '0');
	}

}
