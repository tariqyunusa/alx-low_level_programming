#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 *
 * @str: This is the input string
 */
void puts_half(char *str)
{
	int index, a;

	index = 0;
	while (str[index] != '\0')
		index++;

	a = index / 2;

	if (index % 2 == 1)
		a++;

	while (a < index)
	{
		putchar(str[a]);
		a++;
	}
	putchar('\n');
}
