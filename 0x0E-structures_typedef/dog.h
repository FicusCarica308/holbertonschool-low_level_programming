#ifndef _DOG_H_
#define _DOG_H_
/**
 *struct dog - this structure holds values for a dogs name, age, and owner
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
#endif