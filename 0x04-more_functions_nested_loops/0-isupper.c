#include "main.h"
/**
 * _isupper - A function that checks for uppercase character
 * @c: char to check
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
