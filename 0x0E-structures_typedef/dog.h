#ifndef _DOG_H_
#define _DOG_H_
/**
 *struct dog - this structure holds values for a dogs name, age, and owner
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char c);
#endif
