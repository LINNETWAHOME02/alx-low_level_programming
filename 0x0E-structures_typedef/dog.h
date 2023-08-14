#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure describing a dog's qualities
 * @name: Pointer to the dog's name
 * @age: The dog's age
 * @owner: Pointer to the dog owner's name
 *
 */
typedef struct dog
{
        char *name;
        float age;
        char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
