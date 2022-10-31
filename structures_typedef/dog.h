#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - definition of a new type
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner
 *
 * Description: The Poppy structure
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
