#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to binary string
 * Return: unsigned int conversion
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, dec = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		if (i == 0)
			dec = b[i] - '0';
		else
			dec = 2 * dec + (b[i] - '0');
		i++;
	}
	return (dec);
}
