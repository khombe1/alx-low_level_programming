#include "main.h"

/**
 * rev_string - reverse array
 * @n: pointer to string params
 *
 * This function reverses the characters in the given string.
 */
void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (n[i] != '\0')
	{
	i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
	temp = *(n + j);
	*(n + j) = *(n + i);
	*(n + i) = temp;
	}
	}

/**
 * infinite_add - add 2 numbers together
 * @n1: first number as a string
 * @n2: second number as a string
 * @r: buffer to store the result
 * @size_r: size of the buffer 'r'
 *
 * Return: Pointer to the result 'r', or NULL if buffer is too small.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_sum = 0;

	rev_string(n1);
	rev_string(n2);

	while (n1[i] != '\0' || n2[i] != '\0' || overflow != 0)
	{
	val1 = (n1[i] != '\0') ? (n1[i] - '0') : 0;
	val2 = (n2[i] != '\0') ? (n2[i] - '0') : 0;

	temp_sum = val1 + val2 + overflow;
	overflow = temp_sum / 10;

	if (digits < size_r - 1)
	r[digits] = (temp_sum % 10) + '0';
	else
	return (NULL);

	digits++;
	i++;
	}

	r[digits] = '\0';

	rev_string(r);

	return (r);
}
