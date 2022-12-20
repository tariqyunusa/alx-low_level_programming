#include "main.h"

/**
 * strlen - return the length of a string
 * @a: input
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0' ; a++);

	return (a);
}
