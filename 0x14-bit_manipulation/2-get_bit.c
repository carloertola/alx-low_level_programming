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
	return ((n & (1 << index)) >> index);
}
