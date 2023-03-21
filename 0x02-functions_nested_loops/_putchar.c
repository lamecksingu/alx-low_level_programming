#include <unistd.h>
/**
 * _putchar - writes character c to stdot
 * @c: The character to print
 * Return: On sccess 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
