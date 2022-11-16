#include "dog.h"

/**
 * init_dog - initialize struct dog.
 * @d: pointer to struct dog
 * @name: pointer to char name
 * @age: float age
 * @owner: pointer to char owner
 * Return: Void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
  
