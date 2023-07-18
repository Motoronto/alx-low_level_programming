#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic information of a dog 
 * @d: dog's details
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */


struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

#endif
