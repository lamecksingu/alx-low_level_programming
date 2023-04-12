#include "main.h"
#include <stdlib.h>

int calc_total_length(int a, char **b);

/**
 * calc_total_length - calculate the length of the concatenated string
 * @a: argument count
 * @b: argument vector
 * Return: length after concatenation
 */

int calc_total_length(int a, char **b)
{
	int length, i;
	char *args;

	for (i = 0; i < a; i++)
	{
		args = b[i];
		/*calculate length*/
		while (*args++)
		{
			length++;
		}
		/*add 1 for '\n' after each argument*/
		length++;
	}
	return (length);
}
/**
 * argstostr - concatenate all the arguments
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to the concatenated arguments
 */

char *argstostr(int ac, char **av)
{
	int i, index, total_length;
	char *arg;
	char *result;

	/*return NULL if ac == 0 or av == NULL*/
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/*call helper function*/
	total_length = calc_total_length(ac, av);
	/*allocate memory for concatenated string*/
	result = malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
	{
		/*return NULL if memory allocation fails*/
		return (NULL);
	}
	/*concatenate arguments with '\n' in new string*/
	index = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg)
		{
			result[index++] = *arg++;
		}
		/*append '\n' after each argument*/
		result[index++] = '\n';
	}
	/*add terminating null char*/
	result[total_length] = '\0';
	return (result);
}
