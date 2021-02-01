#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


/**
 * selection_sort - selection sorting algorithm
 * @array: int pointer
 * @size: struct size_t
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min, temp;

	if (size < 2)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		min = i;
		for (j = (i + 1); j < size; j++)
			if (array[j] < array[min])
				min = j;
		temp = *&array[min];
		*&array[min] = *&array[i];
		*&array[i] = temp;
		print_array(array, size);
	}

}
