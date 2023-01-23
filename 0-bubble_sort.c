#include "sort.h"
/**
 * bubble_sort - sorts all the array in ascending order
 * using bubble algorithm
 *
 * @array - array to be sorted
 * @size - number of elements in the array
 *
 * Return: sorted array
 */

void bubble_sort(int *array, size_t size)
{
    int temp;
    size_t i;
    size_t j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < (size - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                print_array(array, size);
            }
        }
    }
}
