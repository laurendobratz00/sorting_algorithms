#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * partition - quick sorting algorithm
 * @array: int pointer to array
 * @size: size
 * @low: int
 * @high: int
 * Return: i
 */

void partition(int *array, int low, int high, size_t size)
{
	int pivot = high;
	int i = low;
	int j, temp;

	if (high - low < 1)
	{
		return;
	}
	for (j = low; j < high; j++)
	{
		if (array[j] < array[pivot] && i == j)
		{
			i++;
		}
		else if (array[j] < array[pivot])
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			print_array(array, size);
		}
		if (j == i && i == pivot)
		{
			partition(array, low, high - 1, size);
		}
	}
	if (array[pivot] != array[i])
	{
		temp = array[pivot];
		array[pivot] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
	partition(array, low, i - 1, size);
	i++;
	partition(array, i, high, size);
}


/**
 * quick_sort - quick sorting algorithm
 * @array: int pointer to an array
 * @size: size of the array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	int low = 0, high = size - 1;

	if (array == NULL)
		return;
	if (size < 2)
		return;
	partition(array, low, high, size);
}
