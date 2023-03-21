#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type with the name, age and owner of a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
