#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initializes acaraible d for type of struct dog
 * @d: class dog type struct to d*
 * @age: age of dog type float
 * @owner:owner of dog type char
 * @name: name oof dog type char
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->age = age;
d->name = name;
d->owner = owner;
}
}

