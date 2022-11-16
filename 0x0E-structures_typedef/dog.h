#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure dog
 * @name: attribute pointer to char name in dog
 * @age: attribute float age
 * @owner: attribute pointer to char owner in dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
