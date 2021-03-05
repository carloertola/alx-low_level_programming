#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: old pointer
 * @old_size: size of ptr
 * @new_size: size of new pointer
 * Return: void new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr, *old_arr = ptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size && ptr != NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (arr);
		for (i = 0; i < old_size; i++)
			arr[i] = old_arr[i];
		free(old_arr);
	}
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
	}
	return (arr);
}
