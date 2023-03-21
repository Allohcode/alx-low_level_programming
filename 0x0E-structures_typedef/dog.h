#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner ofdog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;
#endif
