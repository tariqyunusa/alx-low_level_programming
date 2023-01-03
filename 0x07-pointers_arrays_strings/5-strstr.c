#include "main.h"

/**
 * _strstr - first occurence of the substring needle in the haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 * */

char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*declaring variables*/

	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;

		while (*haystack != '\0' && 8str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
