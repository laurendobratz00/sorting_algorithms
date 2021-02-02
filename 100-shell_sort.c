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
	unsigned int inner, outer, interval = 1;
	int value, i = 0;

	if (size < 2)
		return;
	while (interval <= size / 3)
	{
		interval = interval * 3 + 1;
	}
	while (interval > 0)
	{
		for (outer = interval; outer < size; outer++)
		{
			value = array[outer];
			inner = outer;
			while (inner > interval - 1 && array[inner - interval] >= value)
				{
					array[inner] = array[inner - interval];
					inner -= interval;
				}
			array[inner] = value;
		}
		interval = (interval - 1) / 3;
		i++;
		print_array(array, size);
	}
}
