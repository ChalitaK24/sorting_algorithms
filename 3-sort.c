#include "sort.h"

/**
 * sort - function identifies the pivot and rearranges the array elements
 * then swaps and prints array , makes recurrsive calls to itself to sort 
 * quick_sort - function sorts an array of integers in
 * ascending order using the quick sort algorithm
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array || size < 2)
		return;

	sort(array, 0, size -1, size);
}


void sort(int * array, int lower, int higher, size_t size)
{
	int pivot;
	int i = lower;
	int j;
	int tmp;


	if (lower < higher)
	{
		pivot = array[higher];
		
		for (j = lower; j < higher; j++)
		{
			if (array[j] < pivot)
			{
				if (i != j)
				{
					tmp = array[i];
					array[i] = array[j];
					array[j] = tmp;

					print_array(array, size);
				}
				i++;
			}
		}

		if (i != higher)
		{
			tmp = array[i];
			array[i] = array[higher];
			array[higher] = tmp;

			print_array(array, size);
		}
		
		sort(array, lower, i -1, size);
		sort(array, i +1, higher, size);
	}
}
