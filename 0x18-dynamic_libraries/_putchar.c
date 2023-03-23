#include <unistd.h>

/**
 * _putchar - wrutes character c to stdout
 * @c: character to be printed
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
