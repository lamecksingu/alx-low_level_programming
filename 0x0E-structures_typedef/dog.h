#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure to define data type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
