#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new element of type struct dog
 *
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (new_dog);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
