#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for integer via pointer 
 * @array: array
 * @size: size of array
 * @cmp: pointers to compare function
 * Return: index where integer's found, -1 if not found or array not present
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}