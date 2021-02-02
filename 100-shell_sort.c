#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * shell_sort - shell sorting algorithm
 * @array: int pointer to an array
 * @size: size of the array
 * Return: void
 */

void shell_sort(int *array, size_t size)
{
	unsigned int in, outer, inter = 1;
	int value, i = 0;

	if (size < 2)
		return;
	while (inter <= size / 3)
	{
		inter = inter * 3 + 1;
	}
	while (inter > 0)
	{
		for (outer = inter; outer < size; outer++)
		{
			value = array[outer];
			in = outer;
			while (in > inter - 1 && array[in - inter] >= value)
			{
				array[in] = array[in - inter];
				in -= inter;
			}
			array[in] = value;
		}
		inter = (inter - 1) / 3;
		i++;
		print_array(array, size);
	}
}
