#include "main.h"

/**
 * cap_string - capitalizes words
 * @str: The string to capitalize
 *
 * Return: Capitlized Word
 */

char *cap_string(char *str)
{
	/*start with the first character in the string*/
	char *ptr = str;

	/*iterate through each character in the string*/
	while (*ptr != '\0')
	{
		/*check if the current character is a separator*/
		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
				*ptr == ',' || *ptr == ';' || *ptr == '.' ||
				*ptr == '!' || *ptr == '?' || *ptr == '"' ||
				*ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
			/*move to the next character*/
			ptr++;

		/*otherwise, capitalize the current word*/
		else
		{
			/*capitalize the first character of the word*/
			if (*ptr >= 'a' && *ptr <= 'z')
				*ptr = *ptr - ('a' - 'A');
		}
		/*move to the next character in the word*/
		ptr++;
		/*capitalize the rest of the word*/
		while (*ptr != '\0' && *ptr != ' ' && *ptr != '\t' && *ptr != '\n' &&
				*ptr != ',' && *ptr != ';' && *ptr != '.' &&
				*ptr != '!' && *ptr != '?' && *ptr != '"' &&
				*ptr != '(' && *ptr != ')' && *ptr != '{' && *ptr != '}')
		{
			if (*ptr >= 'A' && *ptr <= 'Z')
				*ptr = *ptr + ('a' - 'A');
			ptr++;
		}
	}
	/*return the modified string*/
	return (str);
}
