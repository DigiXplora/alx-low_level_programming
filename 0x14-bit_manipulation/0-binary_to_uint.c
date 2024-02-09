#include "main.h"

/**
 * binary_to_uint - Converts a binary number to unsigned int.
 * @b: String containing the binary number.
 *
 * Return: The converted number, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		decimal_value = (decimal_value * 2) + (b[index] - '0');
	}

	return (decimal_value);
}
