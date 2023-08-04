#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_num - check if there are digits in the string
 * @str: input string
 *
 * Return: 1 if no digit found, 0 if at least one digit is found
 */
int check_num(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
	if (isdigit(str[count]))
	{
	return (0);
	}
	count++;
	}
	return (1);
}

/**
 * main - print the sum of numbers provided as command-line arguments
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
	if (check_num(argv[count]))
	{
	str_to_int = atoi(argv[count]);
	sum += str_to_int;
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	count++;
	}
	printf("%d\n", sum);
	return (0);
}
