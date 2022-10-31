#ifndef DOG_H
#define DOG_H
/* Define a new type 'struct dog' */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog;

/* function that initialize a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* function that prints a struct dog */
void print_dog(struct dog *d);

/* define a new type dog_t as a new name for type struct dog */
typedef struct dog dog_t;

/* function that creates a new dog */
dog_t *new_dog(char *name, float age, char *owner);

/* function that frees dogs */
void free_dog(dog_t *d);

#endif /* DOG_H */
