#include "sort.h"

/**
 * sort - function identifies the pivot and rearranges the array elements
 * then swaps and prints array , makes recurrsive calls to itself to sort 
 *
 * Return: void
 */

void sort(int * array, int lower, int higher, size_t size)
{
	int pivot;
	int i = lower;
	int j;
	int tmp;


	if (lower < higher)
	{
		pivot = array[high];
		
		for (j = lower; j < higher; j++)
		{
			if (array[j] < pivot)
			{
				if (i != j)
				{
					tmp = array[i];
					array[i] = array[j];
					arrray[j] = tmp;

					print_array(array, size);
				}
				i++;
			}
		}

		if (i != hiher)
		{
			tmp = array[i];
			array[i] = array[higher];
			array[higher] = tmep;

			print_array(array, size);
		}
		
		sort(array, lower, i -1, size);
		sort(array, i +1, higher, size);
	}
}