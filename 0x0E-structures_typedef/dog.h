#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure describing a dog's qualities
 * @name: Pointer to the dog's name
 * @age: The dog's age
 * @owner: Pointer to the dog owner's name
 *
 */
struct dog
{
        char *name;
        float age;
        char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
