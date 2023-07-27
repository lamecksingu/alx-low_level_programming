#include <stdio.h>
/**
 * bmain - a function excecuted before main does
 */
void __attribute__((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
