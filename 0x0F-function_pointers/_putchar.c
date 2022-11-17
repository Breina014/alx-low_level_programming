#include "function_pointers.h"

/**
 * _putchar- the prototype that types
 * @c - character
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
