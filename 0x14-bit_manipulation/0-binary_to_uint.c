#ifndef MAIN_H
#define MAIN_H

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: Binary string.
 *
 * Return: The converted unsigned int.
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to print in binary.
 */
void print_binary(unsigned long int n);

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: Number to extract the bit from.
 * @index: Index of the bit to retrieve.
 *
 * Return: The value of the bit at the given index.
 */
int get_bit(unsigned long int n, unsigned int index);

/**
 * set_bit - Sets the value of a bit at a given index.
 * @n: Pointer to the number to set the bit in.
 * @index: Index of the bit to set.
 *
 * Return: 1 if successful, -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index);

/**
 * clear_bit - Clears the value of a bit at a given index.
 * @n: Pointer to the number to clear the bit in.
 * @index: Index of the bit to clear.
 *
 * Return: 1 if successful, -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index);

/**
 * flip_bits - Flips the bits of one number to match another.
 * @n: Number to flip the bits of.
 * @m: Number to match the flipped bits to.
 *
 * Return: The number of bits needed to be flipped to match m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/**
 * _atoi - Converts a string to an integer.
 * @s: String to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(const char *s);

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to write.
 *
 * Return: On success 1. On error, -1 is returned.
 */
int _putchar(char c);

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void);

#endif
