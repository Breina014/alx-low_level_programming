#include <unistd.h>

/**
 * _putchar - wrutes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1
 * On error -1 is returned, and errno is set approprietly
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}

