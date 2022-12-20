#include "main.h"
/**
 * rev_string - reverse the string.
 * @s: pointer to string.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, j, k, index;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	while (k < j)
	{
		index = s[k];
		s[k] = s[j];
		s[j] = index;
		k++;
		j--;
	}
}
