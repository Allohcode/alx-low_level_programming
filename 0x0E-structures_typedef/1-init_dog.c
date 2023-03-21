#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: input param
 * @name: name of dog
 * @age: age of dog
 * *@owner: owner of dog
 *
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	s->owner = owner;
	}
}
