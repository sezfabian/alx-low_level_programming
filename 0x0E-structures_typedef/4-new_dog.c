#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog1 if succesfull
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int a, b, c;
dog_t *dog1;
for (a = 0; name[a] != '\0'; a++)
;
for (b = 0; owner[b] != '\0'; b++)
;

dog1 = malloc(sizeof(dog_t));

if (dog1 == NULL)
{
free(dog1);
return (NULL);
}

dog1->name = malloc(a + 1);
dog1->owner = malloc(b + 1);

if (dog1->name == NULL || dog1->owner == NULL)
{
free(dog1->name);
free(dog1->owner);
free(dog1);
return (NULL);
}

for (c = 0; c <= a + 1; c++)
dog1->name[c] = name[c];
for (c = 0; c <= a + 1; c++)
dog1->owner[c] = owner[c];

dog1->age = age;
return (dog1);
}

