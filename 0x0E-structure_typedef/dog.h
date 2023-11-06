#ifndef DOG_H
#define DOG_H
/**
 * dog - structure of a dog
 * @owmer : the dogs owner
 * @age :the age of the dog
 * @name: dogs name
 */
typedef struct Dog
{
	char *owner;
	char *name;
	float age;
} dog;

#endif
