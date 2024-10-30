#include "sort.h"

/**
 * selection_sort - function that sorts an array of int
 * ascending order using the Selection sort algorithm
 *
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t index_mn;
	size_t j;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		index_mn = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index_mn])
				index_mn = j;
		}


		if (index_mn != i)
		{
			int tmp = array[i];
			array[i] = array[index_mn];
			array[index_mn] = tmp;

			print_array(array, size);
		}
	}
}
