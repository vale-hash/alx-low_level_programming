#ifndef DOG_H
#define DOG_H
/**
 * dog - structure of a dog
 * @owmer : the dogs owner
 * @age :the age of the dog
 * @name: dogs name
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct dog
{
	char *owner;
	char *name;
	float age;
}dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef dog dog_t;





#endif
