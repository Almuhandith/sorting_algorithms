#include "sort.h"
/**
 * bubble_sort - sort an array using bubble algorithm
 *
 * @array: array to be sorted
 * @size: number of elements in the array
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp, flag;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		flag = 0;
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
