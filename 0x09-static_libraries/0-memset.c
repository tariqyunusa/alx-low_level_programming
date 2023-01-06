#include "main.h"
/**
 * _memet - fills memory with a constant byte.
 * @s: source tring
 * @b: the constant byte for filling
 * @n: length of buffer
 * Return: new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
