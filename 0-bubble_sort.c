#include "sort.h"
#include <stddef.h>
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
	size_t i;
	size_t j;

	if(array == NULL)
		return;

	for(i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
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
