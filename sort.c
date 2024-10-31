#include "sort.h" 



void quick_sort(int *array, size_t size)
{


    if (!array || size < 2)
        return;

    
    sort(array, 0, size - 1, size);
}

void sort(int *array, int low, int high, size_t size)
{
    if (low < high)
    {
        int pivot = array[high];
        int i = low;
	int j;

        for (j = low; j < high; j++)
        {
            if (array[j] < pivot)
            {
                if (i != j)
                {

                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                    print_array(array, size);
                }
                i++;
            }
        }


        if (i != high)
        {
            int temp = array[i];
            array[i] = array[high];
            array[high] = temp;
            print_array(array, size);
        }


        sort(array, low, i - 1, size);
        sort(array, i + 1, high, size);
    }
}

