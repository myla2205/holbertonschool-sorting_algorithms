#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order.
 * @array: A pointer to the array.
 * @size: Size of the array.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, minimum;
	int temp;

	for (i = 0; i < size - 1; ++i)
	{
		minimum = i;
		for (j = i + 1; j < size; ++j)
		{
			if (array[j] < array[minimum])
				minimum = j;
		}
		if (minimum != i)
		{
			temp = array[i];
			array[i] = array[minimum];
			array[minimum] = temp;
			print_array(array, size);
		}
	}
}
