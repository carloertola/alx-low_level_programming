#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another
 *
 * @n: number to flip from
 * @m: number to flip to
 * Return: 1 if it worked or -1 if it didn't
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_count = 0, res;

	if (!n || !m)
		return (NULL);
	res = n ^ m;
	while (res)
	{
		flip_count += res & 0x01;
		res = res >> 1;
	}
	return (flip_count);
}
