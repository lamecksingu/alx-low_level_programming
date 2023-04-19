#include "function_pointers.h"

/**
 * print_name - a function to print name
 * @name: a name to be printed
 * @f: a function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
