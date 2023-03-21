#include "main.h"

/**
 * _strcpy - copying a string pointed by src
 * @dest: this is variable
 * @src: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
