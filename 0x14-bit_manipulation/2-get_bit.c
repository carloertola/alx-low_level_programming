#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number
 * @index: bit index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32 * 8 || !n)
		return (-1);
	return ((n & (1 << index)) >> index);
}
