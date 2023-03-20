#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Auth: Nathi Sibiya
 * Desc: header defines a new type struct dog
 */


/**
 * struct dog - a new type describing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};



#endif
