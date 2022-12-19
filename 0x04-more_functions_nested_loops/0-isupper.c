#include "main.h"
/**
 * _isupper - Checks for uppercase characters
 * @c: An input character
 * Return: 1 if character is uppercase or 0 otherwise
 */
int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;
for (; uppercase <= 'Z'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
