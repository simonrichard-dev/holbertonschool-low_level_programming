#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - duplicates a string
 * @str: entry point
 *
 * Return: a pointer
 */


char *_strdup(char *str)
{
	char *p;
	int x;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}

	p = malloc(len + 1);

	if (p == NULL)
		return (NULL);

	for (x = 0; x < len; x++)
		p[x] = str[x];
	return (str);
}




/**
 * _strdup - main
 * @str: ptr
 * Return: res
 */
/*
char	*_strdup(char *str)
{
	char	*res;
	int	x;

	if (str == 0)
		return (0);
	for (x = 0; str[x]; x++)
		;
	res = (char *) malloc(sizeof(char) * (x + 1));
	if (res == 0)
		return (0);
	for (x = 0; str[x]; x++)
		res[x] = str[x];
	res[x] = '\0';
	return (res);
}
*/

/**
 * new_dog - function that create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: ndog
 */
/*
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *nname;
	char *nowner;

	if (name == 0 || owner == 0)
		return (0);

	nname = _strdup(name);
	if (nname == 0)
		return (0);
	nowner = _strdup(owner);
	if (nowner == 0)
	{
		free(nname);
		return (0);
	}
	ndog = malloc(sizeof(dog_t));
	if (ndog == 0)
	{
		free(nname);
		free(nowner);
		return (0);
	}
	ndog->name = nname;
	ndog->age = age;
	ndog->owner = nowner;
	return (ndog);
}
*/



/**
 * new_dog - dog caracteristics
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 * Return: p
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *n;
	char *o;

	if (name == 0 || owner == 0)
		return (0);

	n = _strdup(name);
	if (n == 0)
		return (0);
	o = _strdup(owner);
	if (o == 0)
	{
		free(n);
		return (0);
	}
	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		free(n);
		free(o);
		return (0);
	}
	p->name = n;
	p->age = age;
	p->owner = o;
	return (p);
}

