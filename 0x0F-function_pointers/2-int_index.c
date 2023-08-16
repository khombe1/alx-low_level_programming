#include "function_pointers.h"

/**
 * int_index - Return index where comparison is true, else -1
 * @array: Array
 * @size: Size of elements in array
 * @cmp: Pointer to comparison function
 *
 * Return: Index if found, -1 if not found or on error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}

	return (-1);
}
