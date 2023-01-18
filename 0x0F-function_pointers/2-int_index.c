/**
 * int_index - searches for an integer.
 * @array: array of integers
 * @size: number of elements in array.
 * @cmp: pointer to function used to compare values.
 *
 * Return: index of first element.
 * -1 if no element is found or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int g, k;

	k = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (k);
		}
		for (g = 0; g < size; g++)
		{
			cmp(array[g]);
			if (cmp(array[g]) > 0)
			{
				k = g;
				break;
			}
			if ((cmp(array[g]) == (-1)))
			{
				return (k);
			}
		}
	}
	return (k);
}
