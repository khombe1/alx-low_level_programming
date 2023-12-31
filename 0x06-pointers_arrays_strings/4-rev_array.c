#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 * @a: Pointer to array.
 * @n: Number of elements in the array.
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temporary, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
	temporary = a[counter];
	a[counter] = a[n];
	a[n] = temporary;
	counter++;
	n--;
	}
}
