#include "main.h"

/**
 * write_char - writes the character c to stdout
 * @c: the character to print
 *
 * Return: 1 on success or -1 on failure
 */
int write_char(char c)
{
	return (write(1, &c, 1));
}
