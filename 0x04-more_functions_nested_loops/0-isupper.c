#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @c: The character to be checked
 *
 * Return: 1 if character is uppercase, 0 otherwise
 */

int _isupper(int c)
{
char uppercase = 'A';
int usupper = 0;
for (; uppercase <= 'Z'; uppercase++)
{
if (c == uppercase)
{isupper = 1;
break;
}
}
return (isupper);
}
