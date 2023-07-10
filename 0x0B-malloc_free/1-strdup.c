#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated in space
 * which contains a copy of the string given as parameter
 * @str: a string given as parameter
 * Return: a pointer to a newly allocated space
 */
char *_strdup(char *str)
{
	char *ptr;
	int m;
	int i;

	m = 0;
	while (m != '\0')
	{
		m++;
	}

	ptr = (char *)malloc(sizeof(char) * (m + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (*str != '\0')
	{
		for (i = 0; str[i]; i++)
		{
			ptr[i] = str[i];
		}
	}
	return (ptr);
}
