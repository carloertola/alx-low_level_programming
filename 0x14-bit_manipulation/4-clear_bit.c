#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: number to work on
 * @index: bit index
 * Return: 1 if it worked or -1 if it didn't
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * 32 || !n)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
