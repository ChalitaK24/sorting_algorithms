#include "sort.h"

/**
 * quick_sort - function sorts an array of integers in
 * ascending order using the quick sort algorithm
 *
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (!array)
		return;

	sort(array, 0, size - 1, size);

}

void sort(int *array, int lower, int higher, size_t size)
{
	if (lower < higher)
	{
		int pivot = array[higher];
		int i = lower;
		int j;
		int same = 1;

		for (j = lower; j <  higher; j++)
		{
			if (array[j] != pivot)
				same = 0;

			if (array[j] < pivot)
			{
				if (i != j)
				{
					int tmp = array[i];
					array[i] = array[j];
					array[j] = tmp;
					print_array(array, size);
				}
				i++;
			}
		}

		if (i != higher)
		{
			int tmp = array[i];
			array[i] = array[higher];
			array[higher] = tmp;
			print_array(array, size);
		}
		if (!same)
		{
			sort(array, lower, i - 1, size);
			sort(array, i + 1, higher, size);
		}
	}
}
