#include "dog.h"
/**
 * print_dog - function that initalizes the dog structure
 * @d : struct of the dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(" ");
		return;
	}
	else
	{
		if ((*d).name == NULL)
		{
			printf("Name : nil");
		}
		else
			printf("Name : %s\n", d->name);
		printf("Age : %f\n", d->age);
		if((*d).owner == NULL)
		{
			printf("Owner : nil");
		}
		else
			printf("Owner : %s\n", d->owner);
	}
}
