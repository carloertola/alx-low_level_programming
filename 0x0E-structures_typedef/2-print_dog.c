#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: struct variable
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
