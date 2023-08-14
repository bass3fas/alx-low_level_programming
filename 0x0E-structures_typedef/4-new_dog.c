#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - func
 * @name: str
 * @age: n
 * @owner: str
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	int lname = 0;
	int lowner = 0;
	int i = 0, j = 0;

	if (dog == NULL)
		return (NULL);
	/* checking length of name, allocating memory, copying */
	while(name[lname])
		lname++;
	dog->name = malloc(sizeof(char) * (lname + 1));
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	while(i < lname)
	{
		dog->name[i] = name[i];
		i++;
	}
	dog->name[i] = '\0';
	/* checking length of owner, allocating memory, copying */
	while(owner[lowner])
		lowner++;
	dog->owner = malloc(sizeof(char) * (lowner + 1));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	while(j < lowner)
	{
		dog->owner[j] = owner[j];
		j++;
	}
	dog->owner[j] = '\0';
	dog->age = age;
	return (dog);
}
