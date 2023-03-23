#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: character to search
 * Return: pointer to the first occurence of th3 character c in the string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Declaring WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*retun s*/
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);/*values null*/
}
