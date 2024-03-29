#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all -print anything
 * @format: the conversion specifier to prints
 */
void print_all(const char * const format, ...)
{
	/*declare variables to hold the variable arguments*/
	char c;
	int i, first_arg = 1;
	float f;
	char *s;
	/* create a pointer to traverse the format string*/
	const char *ptr = format;
	/*declare a va_list to hold the variable arguments*/
	va_list args;
	/*initialize the va_list*/
	va_start(args, format);
	/*start a loop to process each character of the format string*/
	while (*ptr != '\0')
	{
		/*check the current format character and handle accordingly*/
		if (*ptr == 'c')
		{
			c = va_arg(args, int);
			if (!first_arg)
				printf(", ");
			printf("%c", c);
		} else if (*ptr == 'i')
		{
			i = va_arg(args, int);
			if (!first_arg)
				printf(", ");
			printf("%d", i);
		} else if (*ptr == 'f')
		{
			f = va_arg(args, double);
			if (!first_arg)
				printf(", ");
			printf("%f", f);
		} else if (*ptr == 's')
		{
			s = va_arg(args, char*);
			if (!first_arg)
				printf(", ");
			if (s == NULL)
				printf("(ni)");
			else
				printf("%s", s);
		}
		/*move to the next format character*/
		first_arg = 0;
		ptr++;
	}
	va_end(args);
	printf("\n");
}
