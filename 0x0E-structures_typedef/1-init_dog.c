#include <stdlib.h>
#include "dog.h"

/**
*init_dog - a function to initialize dog struct
*@d: dog struct pointer
*@name: name of the dog
*@age: age of the dog
*@owner: owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct d *my_dog;

	my_dog = malloc(sizeof(struct dog));

	if (my_dog == NULL)
		return (NULL);

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
