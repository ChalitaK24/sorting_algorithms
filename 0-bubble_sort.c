#include "sort.h"

/**
 * bubble_sort - Bubble sort implemetation funcion
 * @new:
 *
 *
 */

void bubble_sort(int *array, size_t size)
{
	int start;
	int swap = 0;
	size_t i = 0;

	if(array == NULL)
		return (0);

	for(size_t i; i < size - 1; i++)
	{
		for (size_t j; j < size - 1 - i; j++)
		{
			if (array[j] > array[j +1])
			{
				start = array[j]
				array[j] = array[j+1 1];
				array[j + 1] = start;

				print_array(array, size);
				swap = 1;
			}
		}
	}
}
