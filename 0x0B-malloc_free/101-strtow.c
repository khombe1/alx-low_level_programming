#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag = 0, c, w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
	if (s[c] == ' ')
	flag = 0;
	else if (flag == 0)
	{
	flag = 1;
	w++;
	}
	}
	return (w);
}

/**
 * create_matrix - allocate memory for the matrix
 * @word_count: number of words
 *
 * Return: pointer to allocated matrix, NULL on failure
 */
char **create_matrix(int word_count)
{
	char **matrix;

	matrix = (char **)malloc(sizeof(char *) * (word_count + 1));
	return (matrix);
}

/**
 * extract_words - extract words from a string and populate the matrix
 * @str: input string
 * @matrix: matrix to populate
 */
void extract_words(char *str, char **matrix)
{
	int i, word_index = 0, word_length = 0;
	char *word_start = NULL;
	char in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
	if (!in_word)
	{
	in_word = 1;
	word_start = &str[i];
	word_length = 0;
	}
	word_length++;
	}
	else
	{
	if (in_word)
	{
	in_word = 0;

	matrix[word_index] = (char *)malloc(sizeof(char) * (word_length + 1));
	if (matrix[word_index] != NULL)
	{
	int j;

	for (j = 0; j < word_length; j++)

	{
	matrix[word_index][j] = word_start[j];
	}
	matrix[word_index][j] = '\0';

	word_index++;
	}
	}
	}
	}
	matrix[word_index] = NULL;
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (success)
 * or NULL (error)
 */
char **strtow(char *str)
{
	int word_count;
	char **matrix;

	if (str == NULL || *str == '\0')
	return (NULL);

	word_count = count_word(str);

	if (word_count == 0)
	return (NULL);

	matrix = create_matrix(word_count);

	if (matrix == NULL)
	return (NULL);

	extract_words(str, matrix);

	return (matrix);
}
