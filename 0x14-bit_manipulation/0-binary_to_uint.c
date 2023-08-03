#include "main.h"
/**
 * binary_to_uint - a function to convert binary to unsigned int
 * @b: the binary characters to be converted
 * Return: The converted number or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		/*check if the character is '0' or '1'*/
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		/*shift the result to the left and add the new bit*/
		result = (result << 1) + (*b - '0');
		b++;/*move to the next character*/
	}
	return (result);
}
