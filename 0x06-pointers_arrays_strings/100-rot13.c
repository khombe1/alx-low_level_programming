#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
	char c = s[i];
	int found = 0;

	for (j = 0; data1[j] != '\0'; j++)
	{
	if (c == data1[j])
	{
	found = 1;
	break;
	}
	}

	if (found)
	{
	s[i] = datarot[j];
	}
	}

	return (s);
}
