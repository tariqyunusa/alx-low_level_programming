#include <stdio.h>
/**
 * array_iterator - function that executes function given as parameter.
 * @array: array of element.
 * @size: size of array.
 * @action: function pointer.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array && size > 0 && action)
	{
		for (k = 0; k < size; k++)
		{
			action(array[k]);
		}
	}
}
